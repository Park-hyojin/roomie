import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/phj/Test_cursor/05_ros2_ws_0.5/install/roomie_simple_navigator'
