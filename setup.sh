wget https://packages.clearpathrobotics.com/public.key -O - | sudo apt-key add -
sudo sh -c 'echo "deb https://packages.clearpathrobotics.com/stable/ubuntu $(lsb_release -cs) main" > /etc/apt/sources.list.d/clearpath-latest.list'
sudo apt-get update
source /opt/ros/foxy/setup.bash
rosdep install --from-paths src --ignore-src --rosdistro=$ROS_DISTRO -y
colcon build
source install/setup.bash
