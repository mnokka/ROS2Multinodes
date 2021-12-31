gnome-terminal --tab --title="mytalker" --command="bash -c 'source /opt/ros/foxy/setup.bash; . install/local_setup.bash;  ros2 run multinodes mytalker ; $SHELL'" \
 --tab --title="mylistener" --command="bash -c 'source /opt/ros/foxy/setup.bash; . install/local_setup.bash;  ros2 run multinodes mylistener ; $SHELL'" \
 --tab --title="mytalker2" --command="bash -c 'source /opt/ros/foxy/setup.bash; . install/local_setup.bash;  ros2 run multinodes mytalker2 ; $SHELL'" \
  --tab --title="mylistener2" --command="bash -c 'source /opt/ros/foxy/setup.bash; . install/local_setup.bash;  ros2 run multinodes mylistener2 ; $SHELL'" \
    --tab --title="mylistener3" --command="bash -c 'source /opt/ros/foxy/setup.bash; . install/local_setup.bash;  ros2 run multinodes mylistener3 ; $SHELL'" \