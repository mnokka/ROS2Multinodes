from launch import LaunchDescription
from launch_ros.actions import Node

#execute  ros2 launch launcher.py


def generate_launch_description():
    return LaunchDescription([
        Node(
            package='multinodes',
            namespace='publisher',
            executable='mytalker',
            name='publisher'
        ),
        Node(
            package='multinodes',
            namespace='publisher2',
            executable='mytalker2',
            name='publisher2'
        )#,
        #Node(
        #    package='multinodes',
        #    executable='mimic',
        #    name='mimic',
        #    remappings=[
        #        ('/input/pose', '/turtlesim1/turtle1/pose'),
        #        ('/output/cmd_vel', '/turtlesim2/turtle1/cmd_vel'),
        #    ]
        #)
    ])
