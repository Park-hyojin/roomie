// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from roomie_msgs:srv/ButtonStatus2.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "roomie_msgs/srv/button_status2.hpp"


#ifndef ROOMIE_MSGS__SRV__DETAIL__BUTTON_STATUS2__BUILDER_HPP_
#define ROOMIE_MSGS__SRV__DETAIL__BUTTON_STATUS2__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "roomie_msgs/srv/detail/button_status2__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace roomie_msgs
{

namespace srv
{

namespace builder
{

class Init_ButtonStatus2_Request_button_id
{
public:
  explicit Init_ButtonStatus2_Request_button_id(::roomie_msgs::srv::ButtonStatus2_Request & msg)
  : msg_(msg)
  {}
  ::roomie_msgs::srv::ButtonStatus2_Request button_id(::roomie_msgs::srv::ButtonStatus2_Request::_button_id_type arg)
  {
    msg_.button_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roomie_msgs::srv::ButtonStatus2_Request msg_;
};

class Init_ButtonStatus2_Request_robot_id
{
public:
  Init_ButtonStatus2_Request_robot_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ButtonStatus2_Request_button_id robot_id(::roomie_msgs::srv::ButtonStatus2_Request::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_ButtonStatus2_Request_button_id(msg_);
  }

private:
  ::roomie_msgs::srv::ButtonStatus2_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::roomie_msgs::srv::ButtonStatus2_Request>()
{
  return roomie_msgs::srv::builder::Init_ButtonStatus2_Request_robot_id();
}

}  // namespace roomie_msgs


namespace roomie_msgs
{

namespace srv
{

namespace builder
{

class Init_ButtonStatus2_Response_timestamp
{
public:
  explicit Init_ButtonStatus2_Response_timestamp(::roomie_msgs::srv::ButtonStatus2_Response & msg)
  : msg_(msg)
  {}
  ::roomie_msgs::srv::ButtonStatus2_Response timestamp(::roomie_msgs::srv::ButtonStatus2_Response::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roomie_msgs::srv::ButtonStatus2_Response msg_;
};

class Init_ButtonStatus2_Response_is_pressed
{
public:
  explicit Init_ButtonStatus2_Response_is_pressed(::roomie_msgs::srv::ButtonStatus2_Response & msg)
  : msg_(msg)
  {}
  Init_ButtonStatus2_Response_timestamp is_pressed(::roomie_msgs::srv::ButtonStatus2_Response::_is_pressed_type arg)
  {
    msg_.is_pressed = std::move(arg);
    return Init_ButtonStatus2_Response_timestamp(msg_);
  }

private:
  ::roomie_msgs::srv::ButtonStatus2_Response msg_;
};

class Init_ButtonStatus2_Response_corners
{
public:
  explicit Init_ButtonStatus2_Response_corners(::roomie_msgs::srv::ButtonStatus2_Response & msg)
  : msg_(msg)
  {}
  Init_ButtonStatus2_Response_is_pressed corners(::roomie_msgs::srv::ButtonStatus2_Response::_corners_type arg)
  {
    msg_.corners = std::move(arg);
    return Init_ButtonStatus2_Response_is_pressed(msg_);
  }

private:
  ::roomie_msgs::srv::ButtonStatus2_Response msg_;
};

class Init_ButtonStatus2_Response_size
{
public:
  explicit Init_ButtonStatus2_Response_size(::roomie_msgs::srv::ButtonStatus2_Response & msg)
  : msg_(msg)
  {}
  Init_ButtonStatus2_Response_corners size(::roomie_msgs::srv::ButtonStatus2_Response::_size_type arg)
  {
    msg_.size = std::move(arg);
    return Init_ButtonStatus2_Response_corners(msg_);
  }

private:
  ::roomie_msgs::srv::ButtonStatus2_Response msg_;
};

class Init_ButtonStatus2_Response_y
{
public:
  explicit Init_ButtonStatus2_Response_y(::roomie_msgs::srv::ButtonStatus2_Response & msg)
  : msg_(msg)
  {}
  Init_ButtonStatus2_Response_size y(::roomie_msgs::srv::ButtonStatus2_Response::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_ButtonStatus2_Response_size(msg_);
  }

private:
  ::roomie_msgs::srv::ButtonStatus2_Response msg_;
};

class Init_ButtonStatus2_Response_x
{
public:
  explicit Init_ButtonStatus2_Response_x(::roomie_msgs::srv::ButtonStatus2_Response & msg)
  : msg_(msg)
  {}
  Init_ButtonStatus2_Response_y x(::roomie_msgs::srv::ButtonStatus2_Response::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_ButtonStatus2_Response_y(msg_);
  }

private:
  ::roomie_msgs::srv::ButtonStatus2_Response msg_;
};

class Init_ButtonStatus2_Response_success
{
public:
  explicit Init_ButtonStatus2_Response_success(::roomie_msgs::srv::ButtonStatus2_Response & msg)
  : msg_(msg)
  {}
  Init_ButtonStatus2_Response_x success(::roomie_msgs::srv::ButtonStatus2_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ButtonStatus2_Response_x(msg_);
  }

private:
  ::roomie_msgs::srv::ButtonStatus2_Response msg_;
};

class Init_ButtonStatus2_Response_button_id
{
public:
  explicit Init_ButtonStatus2_Response_button_id(::roomie_msgs::srv::ButtonStatus2_Response & msg)
  : msg_(msg)
  {}
  Init_ButtonStatus2_Response_success button_id(::roomie_msgs::srv::ButtonStatus2_Response::_button_id_type arg)
  {
    msg_.button_id = std::move(arg);
    return Init_ButtonStatus2_Response_success(msg_);
  }

private:
  ::roomie_msgs::srv::ButtonStatus2_Response msg_;
};

class Init_ButtonStatus2_Response_robot_id
{
public:
  Init_ButtonStatus2_Response_robot_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ButtonStatus2_Response_button_id robot_id(::roomie_msgs::srv::ButtonStatus2_Response::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_ButtonStatus2_Response_button_id(msg_);
  }

private:
  ::roomie_msgs::srv::ButtonStatus2_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::roomie_msgs::srv::ButtonStatus2_Response>()
{
  return roomie_msgs::srv::builder::Init_ButtonStatus2_Response_robot_id();
}

}  // namespace roomie_msgs


namespace roomie_msgs
{

namespace srv
{

namespace builder
{

class Init_ButtonStatus2_Event_response
{
public:
  explicit Init_ButtonStatus2_Event_response(::roomie_msgs::srv::ButtonStatus2_Event & msg)
  : msg_(msg)
  {}
  ::roomie_msgs::srv::ButtonStatus2_Event response(::roomie_msgs::srv::ButtonStatus2_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roomie_msgs::srv::ButtonStatus2_Event msg_;
};

class Init_ButtonStatus2_Event_request
{
public:
  explicit Init_ButtonStatus2_Event_request(::roomie_msgs::srv::ButtonStatus2_Event & msg)
  : msg_(msg)
  {}
  Init_ButtonStatus2_Event_response request(::roomie_msgs::srv::ButtonStatus2_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ButtonStatus2_Event_response(msg_);
  }

private:
  ::roomie_msgs::srv::ButtonStatus2_Event msg_;
};

class Init_ButtonStatus2_Event_info
{
public:
  Init_ButtonStatus2_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ButtonStatus2_Event_request info(::roomie_msgs::srv::ButtonStatus2_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ButtonStatus2_Event_request(msg_);
  }

private:
  ::roomie_msgs::srv::ButtonStatus2_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::roomie_msgs::srv::ButtonStatus2_Event>()
{
  return roomie_msgs::srv::builder::Init_ButtonStatus2_Event_info();
}

}  // namespace roomie_msgs

#endif  // ROOMIE_MSGS__SRV__DETAIL__BUTTON_STATUS2__BUILDER_HPP_
