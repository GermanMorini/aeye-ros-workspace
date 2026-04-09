from __future__ import annotations

import ctypes
from dataclasses import dataclass
from datetime import datetime, timezone
import json
import os
from pathlib import Path
import signal
import subprocess
import threading
import time
from typing import Callable, Optional, TextIO

from ament_index_python.packages import PackageNotFoundError, get_package_share_directory


@dataclass(frozen=True)
class ProcessDefinitionRecord:
    label: str
    command: str
    cwd: str


@dataclass(frozen=True)
class ProcessStateRecord:
    process: ProcessDefinitionRecord
    running: bool


@dataclass(frozen=True)
class ProcessRunResult:
    ok: bool
    error: str
    cancelled: bool = False


def _utc_timestamp() -> str:
    return datetime.now(timezone.utc).strftime("%Y%m%d_%H%M%S_%f")


def _safe_log_label(label: str) -> str:
    clean = "".join(ch if ch.isalnum() or ch in "._-" else "_" for ch in str(label))
    return clean.strip("._") or "process"


_PROCESS_EXECUTOR_COMMAND_ENV = "PROCESS_EXECUTOR_COMMAND"
_PROCESS_EXECUTOR_SHELL_WRAPPER = (
    "trap 'kill -- -$$' TERM INT HUP; "
    f'eval "${_PROCESS_EXECUTOR_COMMAND_ENV}"'
)


class ProcessExecutorCore:
    def __init__(
        self,
        *,
        processes_file: str,
        file_logging: bool = True,
        log_root: Optional[Path] = None,
        log_callback: Optional[Callable[[str, str], None]] = None,
    ) -> None:
        self._processes_file = str(processes_file)
        self._file_logging = bool(file_logging)
        self._log_root = Path(log_root) if log_root is not None else Path.cwd() / "log"
        self._log_callback = log_callback
        self._log_lock = threading.Lock()
        self._state_lock = threading.Lock()
        self._closing = threading.Event()
        self._definitions_by_label: dict[str, ProcessDefinitionRecord] = {}
        self._definition_order: list[str] = []
        self._active_labels: set[str] = set()
        self._active_processes: dict[str, subprocess.Popen[str]] = {}
        self._internal_log_path: Optional[Path] = None
        self._internal_log_handle: Optional[TextIO] = None
        if self._file_logging:
            self._open_internal_log()

    @staticmethod
    def default_processes_file() -> str:
        try:
            package_share = Path(get_package_share_directory("utilities"))
        except PackageNotFoundError:
            package_share = Path(__file__).resolve().parents[1]
        return str(package_share / "config" / "process_list.json")

    @property
    def processes_file(self) -> str:
        return self._processes_file

    @property
    def internal_log_path(self) -> Optional[Path]:
        return self._internal_log_path

    def close(self) -> None:
        self._closing.set()
        self.shutdown_active_processes()
        deadline = time.monotonic() + 6.0
        while time.monotonic() < deadline:
            with self._state_lock:
                if not self._active_labels:
                    break
            self.shutdown_active_processes(grace_period_s=0.2)
            time.sleep(0.05)
        with self._log_lock:
            if self._internal_log_handle is not None:
                self._internal_log_handle.close()
                self._internal_log_handle = None

    def shutdown_active_processes(self, *, grace_period_s: float = 5.0) -> None:
        with self._state_lock:
            active_items = list(self._active_processes.items())

        for label, process in active_items:
            if process.poll() is not None:
                continue
            self._log("warning", f"Stopping active process during shutdown: {label}")
            self._terminate_process_group(
                process,
                grace_period_s=grace_period_s,
            )

    def set_processes_file(self, processes_file: str) -> None:
        self._processes_file = str(processes_file)

    def load_processes(self, *, allow_missing: bool = False) -> tuple[bool, str]:
        try:
            records = self._load_process_definitions(
                file_path=self._processes_file,
                allow_missing=allow_missing,
            )
        except ValueError as exc:
            self._log("error", f"Failed loading process list: {exc}")
            return False, str(exc)

        with self._state_lock:
            self._definitions_by_label = {item.label: item for item in records}
            self._definition_order = [item.label for item in records]
        self._log(
            "info",
            f"Loaded {len(records)} processes from {self._processes_file}",
        )
        return True, ""

    def list_processes(self) -> list[ProcessStateRecord]:
        with self._state_lock:
            states = []
            for label in self._definition_order:
                record = self._definitions_by_label[label]
                active = self._active_processes.get(label)
                running = label in self._active_labels or (
                    active is not None and active.poll() is None
                )
                states.append(ProcessStateRecord(process=record, running=running))
            return states

    def execute_process(
        self,
        label: str,
        *,
        output: bool,
        line_callback: Optional[Callable[[str, str], None]] = None,
        cancel_checker: Optional[Callable[[], bool]] = None,
        cancel_grace_s: float = 5.0,
    ) -> ProcessRunResult:
        with self._state_lock:
            record = self._definitions_by_label.get(label)
            if record is None:
                return ProcessRunResult(
                    ok=False,
                    error=f"unknown process: {label}",
                )
            if label in self._active_labels:
                return ProcessRunResult(
                    ok=False,
                    error=f"process already running: {label}",
                )
            self._active_labels.add(label)
        if self._closing.is_set():
            with self._state_lock:
                self._active_labels.discard(label)
            return ProcessRunResult(
                ok=False,
                error="process executor shutting down",
            )

        processes_log_dir = self._log_root / "processes"
        processes_log_dir.mkdir(parents=True, exist_ok=True)
        stamp = _utc_timestamp()
        file_label = _safe_log_label(label)
        stdout_path = processes_log_dir / f"{file_label}-stdout-{stamp}.log"
        stderr_path = processes_log_dir / f"{file_label}-stderr-{stamp}.log"
        feedback_enabled = threading.Event()
        if output and line_callback is not None:
            feedback_enabled.set()

        process: Optional[subprocess.Popen[str]] = None
        stdout_thread: Optional[threading.Thread] = None
        stderr_thread: Optional[threading.Thread] = None
        stdout_file: Optional[TextIO] = None
        stderr_file: Optional[TextIO] = None

        try:
            stdout_file = stdout_path.open("w", encoding="utf-8")
            stderr_file = stderr_path.open("w", encoding="utf-8")
            process_env = os.environ.copy()
            process_env[_PROCESS_EXECUTOR_COMMAND_ENV] = record.command
            process = subprocess.Popen(
                ["bash", "-lc", _PROCESS_EXECUTOR_SHELL_WRAPPER],
                cwd=record.cwd,
                env=process_env,
                stdout=subprocess.PIPE,
                stderr=subprocess.PIPE,
                text=True,
                encoding="utf-8",
                errors="replace",
                bufsize=1,
                preexec_fn=self._configure_child_process,
            )
            with self._state_lock:
                self._active_processes[label] = process
            if self._closing.is_set():
                self._log("warning", f"Executor shutdown in progress, stopping {label}")
                self._terminate_process_group(
                    process,
                    grace_period_s=cancel_grace_s,
                )
            self._log("info", f"Started process {label}: {record.command}")

            assert process.stdout is not None
            assert process.stderr is not None
            stdout_thread = threading.Thread(
                target=self._drain_stream,
                args=(process.stdout, stdout_file, "stdout", line_callback, feedback_enabled),
                daemon=True,
                name=f"{file_label}_stdout",
            )
            stderr_thread = threading.Thread(
                target=self._drain_stream,
                args=(process.stderr, stderr_file, "stderr", line_callback, feedback_enabled),
                daemon=True,
                name=f"{file_label}_stderr",
            )
            stdout_thread.start()
            stderr_thread.start()

            cancelled = False
            exit_code: Optional[int] = None
            while exit_code is None:
                if cancel_checker is not None and cancel_checker():
                    cancelled = True
                    feedback_enabled.clear()
                    exit_code = self._terminate_process_group(
                        process,
                        grace_period_s=cancel_grace_s,
                    )
                    break
                exit_code = process.poll()
                if exit_code is None:
                    time.sleep(0.1)

            if exit_code is None:
                exit_code = process.wait()

            if stdout_thread is not None:
                stdout_thread.join(timeout=1.0)
            if stderr_thread is not None:
                stderr_thread.join(timeout=1.0)

            if cancelled:
                self._log("warning", f"Cancelled process {label}")
                return ProcessRunResult(
                    ok=False,
                    error="cancelled",
                    cancelled=True,
                )

            if exit_code == 0:
                self._log("info", f"Process {label} finished successfully")
                return ProcessRunResult(
                    ok=True,
                    error="",
                )

            error = f"process exited with code {exit_code}"
            self._log("error", f"Process {label} failed: {error}")
            return ProcessRunResult(
                ok=False,
                error=error,
            )
        except Exception as exc:
            self._log("error", f"Failed running process {label}: {exc}")
            return ProcessRunResult(
                ok=False,
                error=f"failed to run process: {exc}",
            )
        finally:
            feedback_enabled.clear()
            if process is not None:
                with self._state_lock:
                    current = self._active_processes.get(label)
                    if current is process:
                        self._active_processes.pop(label, None)
            with self._state_lock:
                self._active_labels.discard(label)
            if stdout_thread is not None and stdout_thread.is_alive():
                stdout_thread.join(timeout=1.0)
            if stderr_thread is not None and stderr_thread.is_alive():
                stderr_thread.join(timeout=1.0)
            if stdout_file is not None:
                stdout_file.close()
            if stderr_file is not None:
                stderr_file.close()

    def _load_process_definitions(
        self,
        *,
        file_path: str,
        allow_missing: bool,
    ) -> list[ProcessDefinitionRecord]:
        path = Path(file_path).expanduser()
        if not path.exists():
            if allow_missing:
                self._log("warning", f"Process list file missing: {path}")
                return []
            raise ValueError(f"process list file not found: {path}")

        try:
            payload = json.loads(path.read_text(encoding="utf-8"))
        except json.JSONDecodeError as exc:
            raise ValueError(f"invalid JSON in {path}: {exc}") from exc

        if not isinstance(payload, dict):
            raise ValueError("process list root must be an object")

        process_list = payload.get("process_list")
        if not isinstance(process_list, list):
            raise ValueError("process_list must be a list")

        seen_labels: set[str] = set()
        records: list[ProcessDefinitionRecord] = []
        for index, item in enumerate(process_list):
            if not isinstance(item, dict):
                raise ValueError(f"process_list[{index}] must be an object")
            label = str(item.get("label", "")).strip()
            command = str(item.get("command", "")).strip()
            cwd = str(item.get("cwd", "")).strip()
            if not label:
                raise ValueError(f"process_list[{index}].label is required")
            if label in seen_labels:
                raise ValueError(f"duplicate process label: {label}")
            if not command:
                raise ValueError(f"process_list[{index}].command is required")
            if not cwd:
                raise ValueError(f"process_list[{index}].cwd is required")
            cwd_path = Path(cwd).expanduser()
            if not cwd_path.is_dir():
                raise ValueError(f"process_list[{index}].cwd is not a directory: {cwd}")
            seen_labels.add(label)
            records.append(ProcessDefinitionRecord(label=label, command=command, cwd=cwd))

        return records

    def _open_internal_log(self) -> None:
        self._log_root.mkdir(parents=True, exist_ok=True)
        self._internal_log_path = self._log_root / f"process_executor-{_utc_timestamp()}.log"
        self._internal_log_handle = self._internal_log_path.open(
            "a",
            encoding="utf-8",
            buffering=1,
        )

    def _log(self, level: str, message: str) -> None:
        if self._log_callback is not None:
            self._log_callback(level, message)
        if self._internal_log_handle is None:
            return
        with self._log_lock:
            stamp = datetime.now(timezone.utc).isoformat()
            self._internal_log_handle.write(f"{stamp} [{level.upper()}] {message}\n")
            self._internal_log_handle.flush()

    @staticmethod
    def _drain_stream(
        stream,
        log_file: TextIO,
        stream_name: str,
        line_callback: Optional[Callable[[str, str], None]],
        feedback_enabled: threading.Event,
    ) -> None:
        try:
            for line in iter(stream.readline, ""):
                if line == "":
                    break
                log_file.write(line)
                log_file.flush()
                if line_callback is not None and feedback_enabled.is_set():
                    line_callback(stream_name, line)
        finally:
            stream.close()

    @staticmethod
    def _terminate_process_group(
        process: subprocess.Popen[str],
        *,
        grace_period_s: float,
    ) -> Optional[int]:
        try:
            os.killpg(process.pid, signal.SIGTERM)
        except ProcessLookupError:
            return process.poll()

        deadline = time.monotonic() + max(float(grace_period_s), 0.0)
        while time.monotonic() < deadline:
            exit_code = process.poll()
            if exit_code is not None:
                return exit_code
            time.sleep(0.05)

        try:
            os.killpg(process.pid, signal.SIGKILL)
        except ProcessLookupError:
            return process.poll()

        try:
            return process.wait(timeout=1.0)
        except subprocess.TimeoutExpired:
            return process.poll()

    @staticmethod
    def _configure_child_process() -> None:
        os.setsid()
        try:
            libc = ctypes.CDLL(None)
            libc.prctl(1, signal.SIGTERM, 0, 0, 0)
        except Exception:
            return

        if os.getppid() == 1:
            os.kill(os.getpid(), signal.SIGTERM)
