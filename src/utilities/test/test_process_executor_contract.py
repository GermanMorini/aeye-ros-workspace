from pathlib import Path

from utilities.process_executor_core import ProcessExecutorCore


PACKAGE_ROOT = Path(__file__).resolve().parents[1]


def test_setup_installs_config_and_entrypoint() -> None:
    setup_contents = (PACKAGE_ROOT / "setup.py").read_text(encoding="utf-8")

    assert '"process_executor = utilities.process_executor:main"' in setup_contents
    assert '(os.path.join("share", package_name, "config"), glob("config/*"))' in setup_contents


def test_default_config_exists() -> None:
    config_path = PACKAGE_ROOT / "config" / "process_list.json"

    assert config_path.exists()
    assert '"process_list": []' in config_path.read_text(encoding="utf-8")


def test_default_processes_file_targets_package_config(monkeypatch, tmp_path: Path) -> None:
    target_share = tmp_path / "share" / "utilities"
    target_share.mkdir(parents=True)
    module_globals = ProcessExecutorCore.default_processes_file.__globals__
    original = module_globals["get_package_share_directory"]
    module_globals["get_package_share_directory"] = lambda _name: str(target_share)
    try:
        result = ProcessExecutorCore.default_processes_file()
    finally:
        module_globals["get_package_share_directory"] = original

    assert result == str(target_share / "config" / "process_list.json")


def test_start_process_action_contract_uses_feedback_streaming() -> None:
    action_contents = (
        Path(__file__).resolve().parents[2] / "interfaces" / "action" / "StartProcess.action"
    ).read_text(encoding="utf-8")

    assert "bool output" in action_contents
    assert "bool ok" in action_contents
    assert "string error" in action_contents
    assert "string stream" in action_contents
    assert "string data" in action_contents
    assert "string stdout" not in action_contents
    assert "string stderr" not in action_contents
