// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from roomie_msgs:srv/StopTracking.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "roomie_msgs/srv/stop_tracking.hpp"


#ifndef ROOMIE_MSGS__SRV__DETAIL__STOP_TRACKING__BUILDER_HPP_
#define ROOMIE_MSGS__SRV__DETAIL__STOP_TRACKING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "roomie_msgs/srv/detail/stop_tracking__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace roomie_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::roomie_msgs::srv::StopTracking_Request>()
{
  return ::roomie_msgs::srv::StopTracking_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace roomie_msgs


namespace roomie_msgs
{

namespace srv
{

namespace builder
{

class Init_StopTracking_Response_message
{
public:
  explicit Init_StopTracking_Response_message(::roomie_msgs::srv::StopTracking_Response & msg)
  : msg_(msg)
  {}
  ::roomie_msgs::srv::StopTracking_Response message(::roomie_msgs::srv::StopTracking_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roomie_msgs::srv::StopTracking_Response msg_;
};

class Init_StopTracking_Response_success
{
public:
  Init_StopTracking_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StopTracking_Response_message success(::roomie_msgs::srv::StopTracking_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_StopTracking_Response_message(msg_);
  }

private:
  ::roomie_msgs::srv::StopTracking_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::roomie_msgs::srv::StopTracking_Response>()
{
  return roomie_msgs::srv::builder::Init_StopTracking_Response_success();
}

}  // namespace roomie_msgs


namespace roomie_msgs
{

namespace srv
{

namespace builder
{

class Init_StopTracking_Event_response
{
public:
  explicit Init_StopTracking_Event_response(::roomie_msgs::srv::StopTracking_Event & msg)
  : msg_(msg)
  {}
  ::roomie_msgs::srv::StopTracking_Event response(::roomie_msgs::srv::StopTracking_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roomie_msgs::srv::StopTracking_Event msg_;
};

class Init_StopTracking_Event_request
{
public:
  explicit Init_StopTracking_Event_request(::roomie_msgs::srv::StopTracking_Event & msg)
  : msg_(msg)
  {}
  Init_StopTracking_Event_response request(::roomie_msgs::srv::StopTracking_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_StopTracking_Event_response(msg_);
  }

private:
  ::roomie_msgs::srv::StopTracking_Event msg_;
};

class Init_StopTracking_Event_info
{
public:
  Init_StopTracking_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StopTracking_Event_request info(::roomie_msgs::srv::StopTracking_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_StopTracking_Event_request(msg_);
  }

private:
  ::roomie_msgs::srv::StopTracking_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::roomie_msgs::srv::StopTracking_Event>()
{
  return roomie_msgs::srv::builder::Init_StopTracking_Event_info();
}

}  // namespace roomie_msgs

#endif  // ROOMIE_MSGS__SRV__DETAIL__STOP_TRACKING__BUILDER_HPP_
