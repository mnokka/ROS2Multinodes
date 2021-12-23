# ROS2Multinodes
POC to see how ROS2 operates when huge number of publisher and subscriber are introduced to Foxy


Fetch down to ROS2 workspace src directory and build: colcon build  


start listener: ros2 run multinodes  mylistener

starte talker: ros2 run multinodes mytalker
