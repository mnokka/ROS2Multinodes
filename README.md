# ROS2Multinodes
POC to see how ROS2 operates when huge number of publisher and subscriber are introduced to Foxy

<br>
Fetch down to ROS2 workspace src directory and build: <b>colcon  build --event-handlers console_direct+</b>  (as verbose)  <br>
<br>
Manual node starting:<br>
start listener: <b>ros2 run multinodes mylistener</b><br>
starte talker: <b>ros2 run multinodes mytalker</b> <br>
 
 <br>
  Script based node starting (Ubuntu):
 
 execute **startnodes.sh**<br>
 script adds tabbed new terminals to current terminal for defined nodes(publisher and suscribers)
 
 <br>
 
 Server Client example from ROS2 pages:<br>
 
 Execute server(own shell): <b>ros2 run multinodes adder_server</b><br>
 Excute client with one "query"(own shell):<b>ros2 run multinodes adder_client 4 5</b><br>
 (Client should reply with sum of parameters, calculated by server)<br>
 
 
 <br>
 <br>
 Node code replicated intentionally. ..
 
