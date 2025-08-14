// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from roomie_msgs:msg/GlassDoorStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "roomie_msgs/msg/glass_door_status.hpp"


#ifndef ROOMIE_MSGS__MSG__DETAIL__GLASS_DOOR_STATUS__BUILDER_HPP_
#define ROOMIE_MSGS__MSG__DETAIL__GLASS_DOOR_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "roomie_msgs/msg/detail/glass_door_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace roomie_msgs
{

namespace msg
{

namespace builder
{

class Init_GlassDoorStatus_opened
{
public:
  explicit Init_GlassDoorStatus_opened(::roomie_msgs::msg::GlassDoorStatus & msg)
  : msg_(msg)
  {}
  ::roomie_msgs::msg::GlassDoorStatus opened(::roomie_msgs::msg::GlassDoorStatus::_opened_type arg)
  {
    msg_.opened = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roomie_msgs::msg::GlassDoorStatus msg_;
};

class Init_GlassDoorStatus_robot_id
{
public:
  Init_GlassDoorStatus_robot_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GlassDoorStatus_opened robot_id(::roomie_msgs::msg::GlassDoorStatus::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_GlassDoorStatus_opened(msg_);
  }

private:
  ::roomie_msgs::msg::GlassDoorStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::roomie_msgs::msg::GlassDoorStatus>()
{
  return roomie_msgs::msg::builder::Init_GlassDoorStatus_robot_id();
}

}  // namespace roomie_msgs

#endif  // ROOMIE_MSGS__MSG__DETAIL__GLASS_DOOR_STATUS__BUILDER_HPP_
