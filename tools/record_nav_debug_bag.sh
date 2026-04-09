#!/usr/bin/env bash
set -euo pipefail

CONTAINER="ros2"
WS="/ros2_ws"
PROFILE="${1:-core}"
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
REPO_ROOT="$(cd "${SCRIPT_DIR}/.." && pwd)"
HOST_BAGS_DIR="${REPO_ROOT}/bags"
CONTAINER_BAGS_DIR="${WS}/bags"
STAMP="$(date +%Y%m%d_%H%M%S)"
OUT_NAME="nav_debug_${PROFILE}_${STAMP}"
OUT_DIR="${CONTAINER_BAGS_DIR}/${OUT_NAME}"
HOST_OUT_DIR="${HOST_BAGS_DIR}/${OUT_NAME}"

CORE_TOPICS=(
  /gps/fix
  /odometry/local
  /odometry/gps
  /imu/data
  /scan
  /cmd_vel
  /cmd_vel_safe
  /cmd_vel_final
  /collision_monitor_state
  /nav_command_server/telemetry
  /nav_command_server/events
  /controller/status
  /controller/telemetry
  /diagnostics
  /tf
  /tf_static
  /rosout
)

FULL_NAV2_TOPICS=(
  /plan
  /local_costmap/costmap
  /global_costmap/costmap
  /local_costmap/published_footprint
  /behavior_tree_log
)

SIM_GERMAN_1GPS_TOPICS=(
  /clock
  /gps/fix_raw
  /gps/fix
  /imu/data_raw
  /imu/data
  /scan_3d_raw
  /scan_3d
  /scan
  /odom_raw
  /odom
  /joint_states
  /wheel/odometry
  /odometry/local
  /odometry/gps
  /cmd_vel
  /cmd_vel_safe
  /cmd_vel_final
  /cmd_vel_gazebo
  /collision_monitor_state
  /nav_command_server/telemetry
  /nav_command_server/events
  /controller/status
  /controller/telemetry
  /controller/drive_telemetry
  /diagnostics
  /tf
  /tf_static
  /rosout
)

TOPICS=("${CORE_TOPICS[@]}")
case "${PROFILE}" in
  core)
    ;;
  full_nav2)
    TOPICS+=("${FULL_NAV2_TOPICS[@]}")
    ;;
  sim_german_1gps)
    TOPICS=("${SIM_GERMAN_1GPS_TOPICS[@]}")
    ;;
  *)
    echo "Perfil invalido: ${PROFILE}" >&2
    echo "Uso: $0 [core|full_nav2|sim_german_1gps]" >&2
    exit 1
    ;;
esac

mkdir -p "${HOST_BAGS_DIR}"

echo "Grabando rosbag perfil='${PROFILE}' en '${OUT_DIR}'"
echo "Host output: ${HOST_OUT_DIR}"
echo "Topics:"
printf '  %s\n' "${TOPICS[@]}"

docker exec -it "${CONTAINER}" bash -lc "\
  set -eo pipefail && \
  source /opt/ros/\${ROS_DISTRO:-humble}/setup.bash && \
  if [ -f ${WS}/install/setup.bash ]; then source ${WS}/install/setup.bash; fi && \
  mkdir -p ${CONTAINER_BAGS_DIR} && \
  cd ${WS} && \
  ros2 bag record -o ${OUT_DIR} ${TOPICS[*]}"
