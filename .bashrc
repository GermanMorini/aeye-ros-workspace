source /opt/ros/humble/setup.bash
source /usr/share/colcon_argcomplete/hook/colcon-argcomplete.bash

alias ll='ls -alF'
alias l='ls -alF'

export TURTLEBOT3_MODEL=waffle
export RCUTILS_COLORIZED_OUTPUT=1

if [ -f /ros2_ws/install/setup.bash ]; then
  source /ros2_ws/install/setup.bash
fi
