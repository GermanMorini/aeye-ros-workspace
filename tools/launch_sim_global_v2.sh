#!/usr/bin/env bash
set -euo pipefail

./tools/stop_sim_v2.sh >/dev/null 2>&1 || true

extra_args="${*:-}"
./tools/exec.sh "source /opt/ros/humble/setup.bash; source /ros2_ws/install/setup.bash; ros2 launch navegacion_gps sim_global_v2.launch.py ${extra_args}"
