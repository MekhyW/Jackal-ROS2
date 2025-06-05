wget https://packages.clearpathrobotics.com/public.key -O - | sudo apt-key add -
sudo sh -c 'echo "deb https://packages.clearpathrobotics.com/stable/ubuntu $(lsb_release -cs) main" > /etc/apt/sources.list.d/clearpath-latest.list'
sudo apt-get update
sudo apt install ros-foxy-twist-mux ros-foxy-velodyne-description ros-foxy-slam-toolbox ros-foxy-nav2-bringup ros-foxy-robot-localization ros-foxy-joint-trajectory-controller ros-foxy-joint-state-broadcaster ros-foxy-interactive-marker-twist-server ros-foxy-imu-filter-madgwick ros-foxy-diff-drive-controller ros-foxy-controller-manager ros-foxy-rqt-robot-monitor ros-foxy-joint-state-publisher-gui -y
source /opt/ros/foxy/setup.bash
rosdep install --from-paths src --ignore-src --rosdistro=$ROS_DISTRO -y
colcon build
source install/setup.bash
