from __future__ import annotations

from pathlib import Path
import threading

from interfaces.action import StartProcess
from interfaces.msg import ProcessDefinition, ProcessState
from interfaces.srv import GetProcesses, ReloadProcesses
import rclpy
from rclpy.action import ActionServer, CancelResponse, GoalResponse
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node

from utilities.process_executor_core import ProcessExecutorCore


class ProcessExecutorNode(Node):
    def __init__(self) -> None:
        super().__init__("process_executor")
        self._callback_group = ReentrantCallbackGroup()
        self._feedback_lock = threading.Lock()
        self._default_processes_file = ProcessExecutorCore.default_processes_file()

        self.declare_parameter("processes_file", self._default_processes_file)
        self.declare_parameter("file_logging", True)

        processes_file = str(self.get_parameter("processes_file").value)
        file_logging = bool(self.get_parameter("file_logging").value)
        self._core = ProcessExecutorCore(
            processes_file=processes_file,
            file_logging=file_logging,
            log_callback=self._log_from_core,
        )

        self._get_processes_srv = self.create_service(
            GetProcesses,
            "get_processes",
            self._on_get_processes,
            callback_group=self._callback_group,
        )
        self._reload_processes_srv = self.create_service(
            ReloadProcesses,
            "reload_processes",
            self._on_reload_processes,
            callback_group=self._callback_group,
        )
        self._start_process_action = ActionServer(
            self,
            StartProcess,
            "start_process",
            execute_callback=self._on_start_process,
            goal_callback=self._on_start_process_goal,
            cancel_callback=self._on_start_process_cancel,
            callback_group=self._callback_group,
        )

        allow_missing = Path(processes_file) == Path(self._default_processes_file)
        ok, error = self._core.load_processes(allow_missing=allow_missing)
        if ok:
            self.get_logger().info("Process catalog ready")
        else:
            self.get_logger().error(f"Process catalog load failed: {error}")

    def destroy_node(self) -> bool:
        self._start_process_action.destroy()
        self._core.close()
        return super().destroy_node()

    def _log_from_core(self, level: str, message: str) -> None:
        if level == "error":
            self.get_logger().error(message)
            return
        if level == "warning":
            self.get_logger().warning(message)
            return
        self.get_logger().info(message)

    def _on_get_processes(self, _request, response: GetProcesses.Response):
        response.process_list = []
        for state in self._core.list_processes():
            msg = ProcessState()
            msg.process = ProcessDefinition()
            msg.process.label = state.process.label
            msg.process.command = state.process.command
            msg.process.cwd = state.process.cwd
            msg.running = state.running
            response.process_list.append(msg)
        return response

    def _on_reload_processes(self, _request, response: ReloadProcesses.Response):
        processes_file = str(self.get_parameter("processes_file").value)
        self._core.set_processes_file(processes_file)
        ok, error = self._core.load_processes(allow_missing=False)
        response.ok = bool(ok)
        response.error = str(error)
        return response

    def _on_start_process_goal(self, _goal_request: StartProcess.Goal) -> GoalResponse:
        return GoalResponse.ACCEPT

    def _on_start_process_cancel(self, _goal_handle) -> CancelResponse:
        return CancelResponse.ACCEPT

    async def _on_start_process(self, goal_handle) -> StartProcess.Result:
        feedback_callback = None
        if bool(goal_handle.request.output):
            feedback_callback = self._build_feedback_callback(goal_handle)
        result_data = self._core.execute_process(
            goal_handle.request.process,
            output=bool(goal_handle.request.output),
            line_callback=feedback_callback,
            cancel_checker=lambda: goal_handle.is_cancel_requested,
        )

        result = StartProcess.Result()
        result.ok = bool(result_data.ok)
        result.error = str(result_data.error)

        if result_data.cancelled:
            goal_handle.canceled()
        elif result_data.ok:
            goal_handle.succeed()
        else:
            goal_handle.abort()
        return result

    def _build_feedback_callback(self, goal_handle):
        def _publish(stream: str, data: str) -> None:
            feedback = StartProcess.Feedback()
            feedback.stream = str(stream)
            feedback.data = str(data)
            with self._feedback_lock:
                goal_handle.publish_feedback(feedback)

        return _publish


def main(args=None) -> None:
    rclpy.init(args=args)
    node = ProcessExecutorNode()
    executor = MultiThreadedExecutor()
    executor.add_node(node)
    try:
        executor.spin()
    finally:
        executor.shutdown()
        node.destroy_node()
        rclpy.shutdown()
