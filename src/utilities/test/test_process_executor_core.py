from __future__ import annotations

import json
from pathlib import Path
import threading
import time

from utilities.process_executor_core import ProcessExecutorCore


def _write_process_list(path: Path, process_list) -> None:
    path.write_text(
        json.dumps({"process_list": process_list}),
        encoding="utf-8",
    )


def test_load_processes_accepts_valid_json(tmp_path: Path) -> None:
    config_path = tmp_path / "process_list.json"
    _write_process_list(
        config_path,
        [
            {
                "label": "alpha",
                "command": "printf 'hola\\n'",
                "cwd": str(tmp_path),
            }
        ],
    )

    core = ProcessExecutorCore(processes_file=str(config_path), file_logging=False)
    ok, error = core.load_processes()

    assert ok is True
    assert error == ""
    states = core.list_processes()
    assert len(states) == 1
    assert states[0].process.label == "alpha"
    assert states[0].running is False


def test_load_processes_rejects_duplicate_labels(tmp_path: Path) -> None:
    config_path = tmp_path / "process_list.json"
    _write_process_list(
        config_path,
        [
            {"label": "dup", "command": "true", "cwd": str(tmp_path)},
            {"label": "dup", "command": "true", "cwd": str(tmp_path)},
        ],
    )

    core = ProcessExecutorCore(processes_file=str(config_path), file_logging=False)
    ok, error = core.load_processes()

    assert ok is False
    assert error == "duplicate process label: dup"


def test_load_processes_rejects_invalid_cwd(tmp_path: Path) -> None:
    config_path = tmp_path / "process_list.json"
    _write_process_list(
        config_path,
        [
            {
                "label": "bad",
                "command": "true",
                "cwd": str(tmp_path / "missing"),
            }
        ],
    )

    core = ProcessExecutorCore(processes_file=str(config_path), file_logging=False)
    ok, error = core.load_processes()

    assert ok is False
    assert "cwd is not a directory" in error


def test_reload_keeps_previous_catalog_on_error(tmp_path: Path) -> None:
    good_path = tmp_path / "good.json"
    bad_path = tmp_path / "bad.json"
    _write_process_list(
        good_path,
        [
            {
                "label": "kept",
                "command": "true",
                "cwd": str(tmp_path),
            }
        ],
    )
    _write_process_list(
        bad_path,
        [
            {
                "label": "broken",
                "command": "true",
                "cwd": str(tmp_path / "missing"),
            }
        ],
    )

    core = ProcessExecutorCore(processes_file=str(good_path), file_logging=False)
    assert core.load_processes() == (True, "")

    core.set_processes_file(str(bad_path))
    ok, error = core.load_processes()

    assert ok is False
    assert "cwd is not a directory" in error
    states = core.list_processes()
    assert [item.process.label for item in states] == ["kept"]


def test_execute_process_captures_stdout_and_stderr(tmp_path: Path, monkeypatch) -> None:
    monkeypatch.chdir(tmp_path)
    config_path = tmp_path / "process_list.json"
    _write_process_list(
        config_path,
        [
            {
                "label": "echoer",
                "command": "printf 'uno\\n'; printf 'dos\\n' >&2",
                "cwd": str(tmp_path),
            }
        ],
    )

    core = ProcessExecutorCore(processes_file=str(config_path), file_logging=False)
    assert core.load_processes() == (True, "")

    feedback = []
    result = core.execute_process(
        "echoer",
        output=True,
        line_callback=lambda stream, data: feedback.append((stream, data)),
    )

    assert result.ok is True
    assert sorted(feedback) == [("stderr", "dos\n"), ("stdout", "uno\n")]
    log_files = sorted((tmp_path / "log" / "processes").glob("echoer-*.log"))
    assert len(log_files) == 2


def test_execute_process_disables_feedback_when_output_false(tmp_path: Path, monkeypatch) -> None:
    monkeypatch.chdir(tmp_path)
    config_path = tmp_path / "process_list.json"
    _write_process_list(
        config_path,
        [
            {
                "label": "quiet",
                "command": "printf 'uno\\n'; printf 'dos\\n' >&2",
                "cwd": str(tmp_path),
            }
        ],
    )

    core = ProcessExecutorCore(processes_file=str(config_path), file_logging=False)
    assert core.load_processes() == (True, "")

    feedback = []
    result = core.execute_process(
        "quiet",
        output=False,
        line_callback=lambda stream, data: feedback.append((stream, data)),
    )

    assert result.ok is True
    assert feedback == []


def test_execute_process_reports_non_zero_exit(tmp_path: Path, monkeypatch) -> None:
    monkeypatch.chdir(tmp_path)
    config_path = tmp_path / "process_list.json"
    _write_process_list(
        config_path,
        [
            {
                "label": "failer",
                "command": "printf 'bad\\n' >&2; exit 7",
                "cwd": str(tmp_path),
            }
        ],
    )

    core = ProcessExecutorCore(processes_file=str(config_path), file_logging=False)
    assert core.load_processes() == (True, "")

    feedback = []
    result = core.execute_process(
        "failer",
        output=True,
        line_callback=lambda stream, data: feedback.append((stream, data)),
    )

    assert result.ok is False
    assert result.error == "process exited with code 7"
    assert feedback == [("stderr", "bad\n")]


def test_execute_process_marks_running_while_active(tmp_path: Path, monkeypatch) -> None:
    monkeypatch.chdir(tmp_path)
    config_path = tmp_path / "process_list.json"
    _write_process_list(
        config_path,
        [
            {
                "label": "slow",
                "command": "sleep 0.5",
                "cwd": str(tmp_path),
            }
        ],
    )

    core = ProcessExecutorCore(processes_file=str(config_path), file_logging=False)
    assert core.load_processes() == (True, "")

    result_holder = {}
    thread = threading.Thread(
        target=lambda: result_holder.setdefault(
            "result",
            core.execute_process("slow", output=False),
        ),
        daemon=True,
    )
    thread.start()

    deadline = time.time() + 2.0
    while time.time() < deadline:
        state = core.list_processes()[0]
        if state.running:
            break
        time.sleep(0.05)
    else:
        raise AssertionError("process never marked running")

    assert core.list_processes()[0].running is True
    thread.join(timeout=2.0)
    assert result_holder["result"].ok is True
    assert core.list_processes()[0].running is False


def test_execute_process_rejects_duplicate_active_label(tmp_path: Path, monkeypatch) -> None:
    monkeypatch.chdir(tmp_path)
    config_path = tmp_path / "process_list.json"
    _write_process_list(
        config_path,
        [
            {
                "label": "busy",
                "command": "sleep 0.5",
                "cwd": str(tmp_path),
            }
        ],
    )

    core = ProcessExecutorCore(processes_file=str(config_path), file_logging=False)
    assert core.load_processes() == (True, "")

    thread = threading.Thread(
        target=lambda: core.execute_process("busy", output=False),
        daemon=True,
    )
    thread.start()

    deadline = time.time() + 2.0
    while time.time() < deadline:
        if core.list_processes()[0].running:
            break
        time.sleep(0.05)

    result = core.execute_process("busy", output=False)

    assert result.ok is False
    assert result.error == "process already running: busy"
    thread.join(timeout=2.0)


def test_execute_process_cancels_running_process(tmp_path: Path, monkeypatch) -> None:
    monkeypatch.chdir(tmp_path)
    config_path = tmp_path / "process_list.json"
    _write_process_list(
        config_path,
        [
            {
                "label": "cancelme",
                "command": "sleep 5",
                "cwd": str(tmp_path),
            }
        ],
    )

    core = ProcessExecutorCore(processes_file=str(config_path), file_logging=False)
    assert core.load_processes() == (True, "")

    cancel_event = threading.Event()
    result_holder = {}
    thread = threading.Thread(
        target=lambda: result_holder.setdefault(
            "result",
            core.execute_process(
                "cancelme",
                output=False,
                cancel_checker=cancel_event.is_set,
                cancel_grace_s=0.2,
            ),
        ),
        daemon=True,
    )
    thread.start()

    deadline = time.time() + 2.0
    while time.time() < deadline:
        if core.list_processes()[0].running:
            break
        time.sleep(0.05)

    cancel_event.set()
    thread.join(timeout=7.0)
    result = result_holder["result"]

    assert result.ok is False
    assert result.cancelled is True
    assert result.error == "cancelled"
    assert core.list_processes()[0].running is False


def test_execute_process_streams_multiple_lines(tmp_path: Path, monkeypatch) -> None:
    monkeypatch.chdir(tmp_path)
    config_path = tmp_path / "process_list.json"
    _write_process_list(
        config_path,
        [
            {
                "label": "streamer",
                "command": "printf 'a\\n'; printf 'b\\n'; printf 'c\\n' >&2",
                "cwd": str(tmp_path),
            }
        ],
    )

    core = ProcessExecutorCore(processes_file=str(config_path), file_logging=False)
    assert core.load_processes() == (True, "")

    feedback = []
    result = core.execute_process(
        "streamer",
        output=True,
        line_callback=lambda stream, data: feedback.append((stream, data)),
    )

    assert result.ok is True
    assert feedback == [
        ("stdout", "a\n"),
        ("stdout", "b\n"),
        ("stderr", "c\n"),
    ]


def test_missing_default_file_keeps_empty_catalog(tmp_path: Path, monkeypatch) -> None:
    monkeypatch.chdir(tmp_path)
    missing_path = tmp_path / "missing.json"
    core = ProcessExecutorCore(
        processes_file=str(missing_path),
        file_logging=False,
    )

    ok, error = core.load_processes(allow_missing=True)

    assert ok is True
    assert error == ""
    assert core.list_processes() == []


def test_file_logging_disabled_skips_internal_log(tmp_path: Path, monkeypatch) -> None:
    monkeypatch.chdir(tmp_path)
    config_path = tmp_path / "process_list.json"
    _write_process_list(config_path, [])

    core = ProcessExecutorCore(processes_file=str(config_path), file_logging=False)
    assert core.internal_log_path is None
    assert core.load_processes() == (True, "")
    assert list((tmp_path / "log").glob("process_executor-*.log")) == []


def test_close_stops_all_active_processes(tmp_path: Path, monkeypatch) -> None:
    monkeypatch.chdir(tmp_path)
    config_path = tmp_path / "process_list.json"
    _write_process_list(
        config_path,
        [
            {
                "label": "linger",
                "command": "sleep 30",
                "cwd": str(tmp_path),
            }
        ],
    )

    core = ProcessExecutorCore(processes_file=str(config_path), file_logging=False)
    assert core.load_processes() == (True, "")

    result_holder = {}
    thread = threading.Thread(
        target=lambda: result_holder.setdefault(
            "result",
            core.execute_process("linger", output=False),
        ),
        daemon=True,
    )
    thread.start()

    deadline = time.time() + 2.0
    while time.time() < deadline:
        if core.list_processes()[0].running:
            break
        time.sleep(0.05)
    else:
        raise AssertionError("process never marked running")

    core.close()
    thread.join(timeout=7.0)

    assert "result" in result_holder
    assert result_holder["result"].ok is False
    assert result_holder["result"].error == "process exited with code -15"
    assert core.list_processes()[0].running is False
