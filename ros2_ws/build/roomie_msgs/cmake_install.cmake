# Install script for directory: /home/phj/Test_cursor/05_ros2_ws_0.5/src/roomie_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/phj/Test_cursor/05_ros2_ws_0.5/install/roomie_msgs")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/rosidl_interfaces" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/ament_cmake_index/share/ament_index/resource_index/rosidl_interfaces/roomie_msgs")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/msg" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_generator_type_description/roomie_msgs/msg/RobotState.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/msg" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_generator_type_description/roomie_msgs/msg/BatteryStatus.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/msg" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_generator_type_description/roomie_msgs/msg/RoomiePose.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/msg" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_generator_type_description/roomie_msgs/msg/Obstacle.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/msg" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_generator_type_description/roomie_msgs/msg/GlassDoorStatus.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/msg" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_generator_type_description/roomie_msgs/msg/Tracking.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/msg" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_generator_type_description/roomie_msgs/msg/RobotGuiEvent.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/msg" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_generator_type_description/roomie_msgs/msg/ReadCardRequest.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/msg" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_generator_type_description/roomie_msgs/msg/ReadCardResponse.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/srv" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_generator_type_description/roomie_msgs/srv/SetVSMode.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/srv" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_generator_type_description/roomie_msgs/srv/Location.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/srv" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_generator_type_description/roomie_msgs/srv/GetLocations.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/srv" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_generator_type_description/roomie_msgs/srv/DoorStatus.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/srv" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_generator_type_description/roomie_msgs/srv/ElevatorStatus.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/srv" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_generator_type_description/roomie_msgs/srv/ButtonStatus.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/srv" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_generator_type_description/roomie_msgs/srv/ButtonStatus2.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/srv" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_generator_type_description/roomie_msgs/srv/CheckItemLoaded.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/srv" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_generator_type_description/roomie_msgs/srv/CheckDoorState.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/srv" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_generator_type_description/roomie_msgs/srv/ControlLock.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/action" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_generator_type_description/roomie_msgs/action/PerformTask.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/action" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_generator_type_description/roomie_msgs/action/PerformReturn.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/action" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_generator_type_description/roomie_msgs/action/StartCountdown.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/action" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_generator_type_description/roomie_msgs/action/ReadCardInfo.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/action" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_generator_type_description/roomie_msgs/action/ReturnCountdown.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/action" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_generator_type_description/roomie_msgs/action/SetPose.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/action" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_generator_type_description/roomie_msgs/action/ClickButton.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/action" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_generator_type_description/roomie_msgs/action/Enroll.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/roomie_msgs/roomie_msgs" TYPE DIRECTORY FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_generator_c/roomie_msgs/" REGEX "/[^/]*\\.h$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/environment" TYPE FILE FILES "/opt/ros/jazzy/lib/python3.12/site-packages/ament_package/template/environment_hook/library_path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/environment" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/ament_cmake_environment_hooks/library_path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_generator_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_generator_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_generator_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/libroomie_msgs__rosidl_generator_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_generator_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_generator_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_generator_c.so"
         OLD_RPATH "/opt/ros/jazzy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_generator_c.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/roomie_msgs/roomie_msgs" TYPE DIRECTORY FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_typesupport_fastrtps_c/roomie_msgs/" REGEX "/[^/]*\\.cpp$" EXCLUDE)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_typesupport_fastrtps_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_typesupport_fastrtps_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_typesupport_fastrtps_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/libroomie_msgs__rosidl_typesupport_fastrtps_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_typesupport_fastrtps_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_typesupport_fastrtps_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_typesupport_fastrtps_c.so"
         OLD_RPATH "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs:/opt/ros/jazzy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_typesupport_fastrtps_c.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/roomie_msgs/roomie_msgs" TYPE DIRECTORY FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_typesupport_introspection_c/roomie_msgs/" REGEX "/[^/]*\\.h$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_typesupport_introspection_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/libroomie_msgs__rosidl_typesupport_introspection_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_typesupport_introspection_c.so"
         OLD_RPATH "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs:/opt/ros/jazzy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_typesupport_introspection_c.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_typesupport_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_typesupport_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/libroomie_msgs__rosidl_typesupport_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_typesupport_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_typesupport_c.so"
         OLD_RPATH "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs:/opt/ros/jazzy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_typesupport_c.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/roomie_msgs/roomie_msgs" TYPE DIRECTORY FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_generator_cpp/roomie_msgs/" REGEX "/[^/]*\\.hpp$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/roomie_msgs/roomie_msgs" TYPE DIRECTORY FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_typesupport_fastrtps_cpp/roomie_msgs/" REGEX "/[^/]*\\.cpp$" EXCLUDE)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_typesupport_fastrtps_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_typesupport_fastrtps_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_typesupport_fastrtps_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/libroomie_msgs__rosidl_typesupport_fastrtps_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_typesupport_fastrtps_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_typesupport_fastrtps_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_typesupport_fastrtps_cpp.so"
         OLD_RPATH "/opt/ros/jazzy/lib:/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_typesupport_fastrtps_cpp.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/roomie_msgs/roomie_msgs" TYPE DIRECTORY FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_typesupport_introspection_cpp/roomie_msgs/" REGEX "/[^/]*\\.hpp$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_typesupport_introspection_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_typesupport_introspection_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_typesupport_introspection_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/libroomie_msgs__rosidl_typesupport_introspection_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_typesupport_introspection_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_typesupport_introspection_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_typesupport_introspection_cpp.so"
         OLD_RPATH "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs:/opt/ros/jazzy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_typesupport_introspection_cpp.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_typesupport_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_typesupport_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_typesupport_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/libroomie_msgs__rosidl_typesupport_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_typesupport_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_typesupport_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_typesupport_cpp.so"
         OLD_RPATH "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs:/opt/ros/jazzy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_typesupport_cpp.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/environment" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/ament_cmake_environment_hooks/pythonpath.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/environment" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/ament_cmake_environment_hooks/pythonpath.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/roomie_msgs-0.0.0-py3.12.egg-info" TYPE DIRECTORY FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/ament_cmake_python/roomie_msgs/roomie_msgs.egg-info/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/roomie_msgs" TYPE DIRECTORY FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_generator_py/roomie_msgs/" REGEX "/[^/]*\\.pyc$" EXCLUDE REGEX "/\\_\\_pycache\\_\\_$" EXCLUDE)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(
        COMMAND
        "/home/phj/venv/ros_venv/bin/python3" "-m" "compileall"
        "/home/phj/Test_cursor/05_ros2_ws_0.5/install/roomie_msgs/lib/python3.12/site-packages/roomie_msgs"
      )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/roomie_msgs/roomie_msgs_s__rosidl_typesupport_fastrtps_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/roomie_msgs/roomie_msgs_s__rosidl_typesupport_fastrtps_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/roomie_msgs/roomie_msgs_s__rosidl_typesupport_fastrtps_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/roomie_msgs" TYPE MODULE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_generator_py/roomie_msgs/roomie_msgs_s__rosidl_typesupport_fastrtps_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/roomie_msgs/roomie_msgs_s__rosidl_typesupport_fastrtps_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/roomie_msgs/roomie_msgs_s__rosidl_typesupport_fastrtps_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/roomie_msgs/roomie_msgs_s__rosidl_typesupport_fastrtps_c.so"
         OLD_RPATH "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs:/opt/ros/jazzy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/roomie_msgs/roomie_msgs_s__rosidl_typesupport_fastrtps_c.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/CMakeFiles/roomie_msgs_s__rosidl_typesupport_fastrtps_c.dir/install-cxx-module-bmi-RelWithDebInfo.cmake" OPTIONAL)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/roomie_msgs/roomie_msgs_s__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/roomie_msgs/roomie_msgs_s__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/roomie_msgs/roomie_msgs_s__rosidl_typesupport_introspection_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/roomie_msgs" TYPE MODULE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_generator_py/roomie_msgs/roomie_msgs_s__rosidl_typesupport_introspection_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/roomie_msgs/roomie_msgs_s__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/roomie_msgs/roomie_msgs_s__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/roomie_msgs/roomie_msgs_s__rosidl_typesupport_introspection_c.so"
         OLD_RPATH "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs:/opt/ros/jazzy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/roomie_msgs/roomie_msgs_s__rosidl_typesupport_introspection_c.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/CMakeFiles/roomie_msgs_s__rosidl_typesupport_introspection_c.dir/install-cxx-module-bmi-RelWithDebInfo.cmake" OPTIONAL)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/roomie_msgs/roomie_msgs_s__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/roomie_msgs/roomie_msgs_s__rosidl_typesupport_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/roomie_msgs/roomie_msgs_s__rosidl_typesupport_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/roomie_msgs" TYPE MODULE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_generator_py/roomie_msgs/roomie_msgs_s__rosidl_typesupport_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/roomie_msgs/roomie_msgs_s__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/roomie_msgs/roomie_msgs_s__rosidl_typesupport_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/roomie_msgs/roomie_msgs_s__rosidl_typesupport_c.so"
         OLD_RPATH "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs:/opt/ros/jazzy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/roomie_msgs/roomie_msgs_s__rosidl_typesupport_c.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/CMakeFiles/roomie_msgs_s__rosidl_typesupport_c.dir/install-cxx-module-bmi-RelWithDebInfo.cmake" OPTIONAL)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_generator_py.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_generator_py.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_generator_py.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/libroomie_msgs__rosidl_generator_py.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_generator_py.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_generator_py.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_generator_py.so"
         OLD_RPATH "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs:/opt/ros/jazzy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroomie_msgs__rosidl_generator_py.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/msg" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_adapter/roomie_msgs/msg/RobotState.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/msg" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_adapter/roomie_msgs/msg/BatteryStatus.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/msg" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_adapter/roomie_msgs/msg/RoomiePose.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/msg" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_adapter/roomie_msgs/msg/Obstacle.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/msg" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_adapter/roomie_msgs/msg/GlassDoorStatus.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/msg" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_adapter/roomie_msgs/msg/Tracking.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/msg" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_adapter/roomie_msgs/msg/RobotGuiEvent.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/msg" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_adapter/roomie_msgs/msg/ReadCardRequest.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/msg" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_adapter/roomie_msgs/msg/ReadCardResponse.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/srv" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_adapter/roomie_msgs/srv/SetVSMode.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/srv" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_adapter/roomie_msgs/srv/Location.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/srv" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_adapter/roomie_msgs/srv/GetLocations.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/srv" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_adapter/roomie_msgs/srv/DoorStatus.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/srv" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_adapter/roomie_msgs/srv/ElevatorStatus.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/srv" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_adapter/roomie_msgs/srv/ButtonStatus.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/srv" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_adapter/roomie_msgs/srv/ButtonStatus2.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/srv" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_adapter/roomie_msgs/srv/CheckItemLoaded.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/srv" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_adapter/roomie_msgs/srv/CheckDoorState.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/srv" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_adapter/roomie_msgs/srv/ControlLock.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/action" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_adapter/roomie_msgs/action/PerformTask.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/action" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_adapter/roomie_msgs/action/PerformReturn.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/action" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_adapter/roomie_msgs/action/StartCountdown.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/action" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_adapter/roomie_msgs/action/ReadCardInfo.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/action" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_adapter/roomie_msgs/action/ReturnCountdown.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/action" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_adapter/roomie_msgs/action/SetPose.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/action" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_adapter/roomie_msgs/action/ClickButton.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/action" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_adapter/roomie_msgs/action/Enroll.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/robot_status" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/src/roomie_msgs/msg/robot_status/RobotState.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/robot_status" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/src/roomie_msgs/msg/robot_status/BatteryStatus.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/robot_status" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/src/roomie_msgs/msg/robot_status/RoomiePose.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/robot_status" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/src/roomie_msgs/msg/robot_status/Obstacle.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/robot_status" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/src/roomie_msgs/msg/robot_status/GlassDoorStatus.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/robot_status" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/src/roomie_msgs/msg/robot_status/Tracking.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/user_interface" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/src/roomie_msgs/msg/user_interface/RobotGuiEvent.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/rfid" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/src/roomie_msgs/msg/rfid/ReadCardRequest.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/rfid" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/src/roomie_msgs/msg/rfid/ReadCardResponse.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/robot_control" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/src/roomie_msgs/srv/robot_control/SetVSMode.srv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/robot_control" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/src/roomie_msgs/srv/robot_control/Location.srv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/robot_control" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/src/roomie_msgs/srv/robot_control/GetLocations.srv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/door_elevator" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/src/roomie_msgs/srv/door_elevator/DoorStatus.srv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/door_elevator" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/src/roomie_msgs/srv/door_elevator/ElevatorStatus.srv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/sensor" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/src/roomie_msgs/srv/sensor/ButtonStatus.srv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/sensor" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/src/roomie_msgs/srv/sensor/ButtonStatus2.srv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/sensor" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/src/roomie_msgs/srv/sensor/CheckItemLoaded.srv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/sensor" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/src/roomie_msgs/srv/sensor/CheckDoorState.srv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/security" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/src/roomie_msgs/srv/security/ControlLock.srv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/action" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/src/roomie_msgs/action/PerformTask.action")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/action" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/src/roomie_msgs/action/PerformReturn.action")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/action" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/src/roomie_msgs/action/StartCountdown.action")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/action" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/src/roomie_msgs/action/ReadCardInfo.action")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/action" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/src/roomie_msgs/action/ReturnCountdown.action")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/action" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/src/roomie_msgs/action/SetPose.action")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/action" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/src/roomie_msgs/action/ClickButton.action")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/action" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/src/roomie_msgs/action/Enroll.action")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/roomie_msgs")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/roomie_msgs")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/environment" TYPE FILE FILES "/opt/ros/jazzy/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/environment" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/environment" TYPE FILE FILES "/opt/ros/jazzy/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/environment" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/ament_cmake_environment_hooks/path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/ament_cmake_environment_hooks/local_setup.bash")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/ament_cmake_environment_hooks/local_setup.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/ament_cmake_environment_hooks/package.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/ament_cmake_index/share/ament_index/resource_index/packages/roomie_msgs")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake/export_roomie_msgs__rosidl_generator_cExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake/export_roomie_msgs__rosidl_generator_cExport.cmake"
         "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/CMakeFiles/Export/3a591fd1b2b4cf6abce999a4dca11403/export_roomie_msgs__rosidl_generator_cExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake/export_roomie_msgs__rosidl_generator_cExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake/export_roomie_msgs__rosidl_generator_cExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/CMakeFiles/Export/3a591fd1b2b4cf6abce999a4dca11403/export_roomie_msgs__rosidl_generator_cExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/CMakeFiles/Export/3a591fd1b2b4cf6abce999a4dca11403/export_roomie_msgs__rosidl_generator_cExport-relwithdebinfo.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake/export_roomie_msgs__rosidl_typesupport_fastrtps_cExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake/export_roomie_msgs__rosidl_typesupport_fastrtps_cExport.cmake"
         "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/CMakeFiles/Export/3a591fd1b2b4cf6abce999a4dca11403/export_roomie_msgs__rosidl_typesupport_fastrtps_cExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake/export_roomie_msgs__rosidl_typesupport_fastrtps_cExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake/export_roomie_msgs__rosidl_typesupport_fastrtps_cExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/CMakeFiles/Export/3a591fd1b2b4cf6abce999a4dca11403/export_roomie_msgs__rosidl_typesupport_fastrtps_cExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/CMakeFiles/Export/3a591fd1b2b4cf6abce999a4dca11403/export_roomie_msgs__rosidl_typesupport_fastrtps_cExport-relwithdebinfo.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake/roomie_msgs__rosidl_typesupport_introspection_cExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake/roomie_msgs__rosidl_typesupport_introspection_cExport.cmake"
         "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/CMakeFiles/Export/3a591fd1b2b4cf6abce999a4dca11403/roomie_msgs__rosidl_typesupport_introspection_cExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake/roomie_msgs__rosidl_typesupport_introspection_cExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake/roomie_msgs__rosidl_typesupport_introspection_cExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/CMakeFiles/Export/3a591fd1b2b4cf6abce999a4dca11403/roomie_msgs__rosidl_typesupport_introspection_cExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/CMakeFiles/Export/3a591fd1b2b4cf6abce999a4dca11403/roomie_msgs__rosidl_typesupport_introspection_cExport-relwithdebinfo.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake/roomie_msgs__rosidl_typesupport_cExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake/roomie_msgs__rosidl_typesupport_cExport.cmake"
         "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/CMakeFiles/Export/3a591fd1b2b4cf6abce999a4dca11403/roomie_msgs__rosidl_typesupport_cExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake/roomie_msgs__rosidl_typesupport_cExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake/roomie_msgs__rosidl_typesupport_cExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/CMakeFiles/Export/3a591fd1b2b4cf6abce999a4dca11403/roomie_msgs__rosidl_typesupport_cExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/CMakeFiles/Export/3a591fd1b2b4cf6abce999a4dca11403/roomie_msgs__rosidl_typesupport_cExport-relwithdebinfo.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake/export_roomie_msgs__rosidl_generator_cppExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake/export_roomie_msgs__rosidl_generator_cppExport.cmake"
         "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/CMakeFiles/Export/3a591fd1b2b4cf6abce999a4dca11403/export_roomie_msgs__rosidl_generator_cppExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake/export_roomie_msgs__rosidl_generator_cppExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake/export_roomie_msgs__rosidl_generator_cppExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/CMakeFiles/Export/3a591fd1b2b4cf6abce999a4dca11403/export_roomie_msgs__rosidl_generator_cppExport.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake/export_roomie_msgs__rosidl_typesupport_fastrtps_cppExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake/export_roomie_msgs__rosidl_typesupport_fastrtps_cppExport.cmake"
         "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/CMakeFiles/Export/3a591fd1b2b4cf6abce999a4dca11403/export_roomie_msgs__rosidl_typesupport_fastrtps_cppExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake/export_roomie_msgs__rosidl_typesupport_fastrtps_cppExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake/export_roomie_msgs__rosidl_typesupport_fastrtps_cppExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/CMakeFiles/Export/3a591fd1b2b4cf6abce999a4dca11403/export_roomie_msgs__rosidl_typesupport_fastrtps_cppExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/CMakeFiles/Export/3a591fd1b2b4cf6abce999a4dca11403/export_roomie_msgs__rosidl_typesupport_fastrtps_cppExport-relwithdebinfo.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake/roomie_msgs__rosidl_typesupport_introspection_cppExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake/roomie_msgs__rosidl_typesupport_introspection_cppExport.cmake"
         "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/CMakeFiles/Export/3a591fd1b2b4cf6abce999a4dca11403/roomie_msgs__rosidl_typesupport_introspection_cppExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake/roomie_msgs__rosidl_typesupport_introspection_cppExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake/roomie_msgs__rosidl_typesupport_introspection_cppExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/CMakeFiles/Export/3a591fd1b2b4cf6abce999a4dca11403/roomie_msgs__rosidl_typesupport_introspection_cppExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/CMakeFiles/Export/3a591fd1b2b4cf6abce999a4dca11403/roomie_msgs__rosidl_typesupport_introspection_cppExport-relwithdebinfo.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake/roomie_msgs__rosidl_typesupport_cppExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake/roomie_msgs__rosidl_typesupport_cppExport.cmake"
         "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/CMakeFiles/Export/3a591fd1b2b4cf6abce999a4dca11403/roomie_msgs__rosidl_typesupport_cppExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake/roomie_msgs__rosidl_typesupport_cppExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake/roomie_msgs__rosidl_typesupport_cppExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/CMakeFiles/Export/3a591fd1b2b4cf6abce999a4dca11403/roomie_msgs__rosidl_typesupport_cppExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/CMakeFiles/Export/3a591fd1b2b4cf6abce999a4dca11403/roomie_msgs__rosidl_typesupport_cppExport-relwithdebinfo.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake/export_roomie_msgs__rosidl_generator_pyExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake/export_roomie_msgs__rosidl_generator_pyExport.cmake"
         "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/CMakeFiles/Export/3a591fd1b2b4cf6abce999a4dca11403/export_roomie_msgs__rosidl_generator_pyExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake/export_roomie_msgs__rosidl_generator_pyExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake/export_roomie_msgs__rosidl_generator_pyExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/CMakeFiles/Export/3a591fd1b2b4cf6abce999a4dca11403/export_roomie_msgs__rosidl_generator_pyExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/CMakeFiles/Export/3a591fd1b2b4cf6abce999a4dca11403/export_roomie_msgs__rosidl_generator_pyExport-relwithdebinfo.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_cmake/rosidl_cmake-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/ament_cmake_export_targets/ament_cmake_export_targets-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_cmake/rosidl_cmake_export_typesupport_targets-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/rosidl_cmake/rosidl_cmake_export_typesupport_libraries-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs/cmake" TYPE FILE FILES
    "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/ament_cmake_core/roomie_msgsConfig.cmake"
    "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/ament_cmake_core/roomie_msgsConfig-version.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roomie_msgs" TYPE FILE FILES "/home/phj/Test_cursor/05_ros2_ws_0.5/src/roomie_msgs/package.xml")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/roomie_msgs__py/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/phj/Test_cursor/05_ros2_ws_0.5/build/roomie_msgs/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
