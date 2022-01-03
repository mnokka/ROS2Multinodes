# ROS2Multinodes
POC to see how ROS2 operates when huge number of publisher and subscriber are introduced to Foxy

<br>
Fetch down to ROS2 workspace src directory and build: <b>colcon build  build --event-handlers console_direct+</b>  (as verbose)  <br>
<br>
Manual node starting:<br>
start listener: <b>ros2 run multinodes mylistener</b><br>
starte talker: <b>ros2 run multinodes mytalker</b> <br>
 
 <br>
  Script based node starting (Ubuntu):
 
 execute **startnodes.sh**<br>
 script adds tabbed new terminals to current terminal for defined nodes
 
 <br>
 <br>
 Node code replicated intentionally. ..
 