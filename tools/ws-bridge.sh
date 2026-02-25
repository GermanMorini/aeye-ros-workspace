#!/usr/bin/env bash
set -euo pipefail

./tools/exec.sh 'ros2 launch cmd_vel_uart_bridge ws_bridge.launch.py max_steer_deg:=20.0 turning_radius:=1.7 steer_limit:=0.5 invert_steer:=true'
