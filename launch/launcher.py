from launch import LaunchDescription
from launch_ros.actions import Node

#execute from main level:  ros2 launch multinodes launcher.py


def generate_launch_description():
    return LaunchDescription([
        Node(
            package='multinodes',
            #namespace='publisher',
            executable='mytalker',
            name='publisher'
        ),
        Node(
            package='multinodes',
            #namespace='publisher2',
            executable='mytalker2',
            name='publisher2'
        ),
             Node(
            package='multinodes',
           # namespace='listener',
            executable='mylistener',
            name='listener'
        ),
                  Node(
            package='multinodes',
          #  namespace='listener2',
            executable='mylistener2',
            name='listener2'
        ),
           Node(
            package='multinodes',
          #  namespace='listener3',
            executable='mylistener3',
            name='listener3'
        ),
    ])
