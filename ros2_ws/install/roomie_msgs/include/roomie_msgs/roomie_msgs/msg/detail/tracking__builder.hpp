// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from roomie_msgs:msg/Tracking.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "roomie_msgs/msg/tracking.hpp"


#ifndef ROOMIE_MSGS__MSG__DETAIL__TRACKING__BUILDER_HPP_
#define ROOMIE_MSGS__MSG__DETAIL__TRACKING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "roomie_msgs/msg/detail/tracking__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace roomie_msgs
{

namespace msg
{

namespace builder
{

class Init_Tracking_event
{
public:
  explicit Init_Tracking_event(::roomie_msgs::msg::Tracking & msg)
  : msg_(msg)
  {}
  ::roomie_msgs::msg::Tracking event(::roomie_msgs::msg::Tracking::_event_type arg)
  {
    msg_.event = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roomie_msgs::msg::Tracking msg_;
};

class Init_Tracking_id
{
public:
  Init_Tracking_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Tracking_event id(::roomie_msgs::msg::Tracking::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Tracking_event(msg_);
  }

private:
  ::roomie_msgs::msg::Tracking msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::roomie_msgs::msg::Tracking>()
{
  return roomie_msgs::msg::builder::Init_Tracking_id();
}

}  // namespace roomie_msgs

#endif  // ROOMIE_MSGS__MSG__DETAIL__TRACKING__BUILDER_HPP_
