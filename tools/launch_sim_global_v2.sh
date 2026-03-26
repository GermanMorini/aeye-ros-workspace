#!/usr/bin/env bash
set -euo pipefail

CONTAINER="ros2"

./tools/stop_sim_global_v2.sh >/dev/null 2>&1 || true

if ! docker ps --format '{{.Names}}' | grep -qx "${CONTAINER}"; then
  echo "El contenedor ${CONTAINER} no esta corriendo."
  exit 1
fi

docker exec "${CONTAINER}" bash -lc "
  mkdir -p /ros2_ws/logs
  nohup bash -lc 'source /opt/ros/humble/setup.bash; source /ros2_ws/install/setup.bash; ros2 launch navegacion_gps sim_global_v2.launch.py' \
    </dev/null >/ros2_ws/logs/sim_global_v2.log 2>&1 &
"

sleep 5

./tools/exec.sh "source /opt/ros/humble/setup.bash; source /ros2_ws/install/setup.bash; ros2 launch navegacion_gps rviz_sim_global_v2.launch.py"
