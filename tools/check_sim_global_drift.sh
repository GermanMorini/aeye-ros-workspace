#!/usr/bin/env bash
set -euo pipefail

CONTAINER="ros2"
quoted_args=()
docker_exec_flags=(-i)

for arg in "$@"; do
  quoted_args+=("$(printf '%q' "$arg")")
done

if [[ -t 0 && -t 1 ]]; then
  docker_exec_flags=(-it)
fi

docker exec "${docker_exec_flags[@]}" "${CONTAINER}" bash -lc "source /opt/ros/humble/setup.bash && source /ros2_ws/install/setup.bash && ros2 run navegacion_gps sim_global_drift_check ${quoted_args[*]}"
