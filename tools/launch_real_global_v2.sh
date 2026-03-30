#!/usr/bin/env bash
set -euo pipefail

LAUNCH_ARGS=(
  "enable_rtk:=true"
  "enable_gps_course_heading:=true"
)

CMD="source /opt/ros/humble/setup.bash; source /ros2_ws/install/setup.bash; export RMW_IMPLEMENTATION=rmw_cyclonedds_cpp; ros2 launch navegacion_gps real_global_v2.launch.py"

for arg in "${LAUNCH_ARGS[@]}" "$@"; do
  CMD+=" $(printf '%q' "${arg}")"
done

./tools/exec.sh "${CMD}"
