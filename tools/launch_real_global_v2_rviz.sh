#!/usr/bin/env bash
set -euo pipefail

# Launch only RViz for `real_global_v2` from an operator PC.
#
# This helper assumes the robot is already running the headless navigation
# stack and that this workstation only needs to join the same ROS 2 graph
# over the network.

RMW_IMPLEMENTATION_VALUE="${RMW_IMPLEMENTATION:-rmw_cyclonedds_cpp}"
ROS_DOMAIN_ID_VALUE="${ROS_DOMAIN_ID:-0}"
ROS_LOCALHOST_ONLY_VALUE="${ROS_LOCALHOST_ONLY:-0}"
RVIZ_CONFIG_VALUE="${RVIZ_CONFIG:-/ros2_ws/src/navegacion_gps/config/rviz_global_v2.rviz}"
CUSTOM_URDF_VALUE="${CUSTOM_URDF:-/ros2_ws/src/navegacion_gps/models/cuatri_real.urdf}"

LAUNCH_ARGS=(
  "custom_urdf:=${CUSTOM_URDF_VALUE}"
  "rviz_config:=${RVIZ_CONFIG_VALUE}"
)

CMD="source /opt/ros/humble/setup.bash; source /ros2_ws/install/setup.bash; export RMW_IMPLEMENTATION=$(printf '%q' "${RMW_IMPLEMENTATION_VALUE}"); export ROS_DOMAIN_ID=$(printf '%q' "${ROS_DOMAIN_ID_VALUE}"); export ROS_LOCALHOST_ONLY=$(printf '%q' "${ROS_LOCALHOST_ONLY_VALUE}"); ros2 launch navegacion_gps rviz_real_global_v2.launch.py"

for arg in "${LAUNCH_ARGS[@]}" "$@"; do
  CMD+=" $(printf '%q' "${arg}")"
done

./tools/exec.sh "${CMD}"
