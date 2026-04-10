#!/usr/bin/env bash
set -euo pipefail

latest_bag="$(find /ros2_ws/log/bags -mindepth 1 -maxdepth 1 -type d -printf '%T@ %p\n' | sort -nr | head -n1 | cut -d' ' -f2-)"

if [ -z "${latest_bag}" ]; then
  echo "no rosbag found in /ros2_ws/log/bags" >&2
  exit 1
fi

exec ros2 bag play --loop "${latest_bag}"
