from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='roomie_rc_test',
            executable='rms_server',
            name='rms_server',
            output='screen'
        ),
        Node(
            package='roomie_rc_test',
            executable='rgui_server',
            name='rgui_server',
            output='screen'
        ),
        Node(
            package='roomie_rc_test',
            executable='vs_server',
            name='vs_server',
            output='screen'
        ),
        Node(
            package='roomie_rc_test',
            executable='ioc_server',
            name='ioc_server',
            output='screen'
        ),
        Node(
            package='roomie_rc_test',
            executable='arm_server',
            name='arm_server',
            output='screen'
        )
    ])