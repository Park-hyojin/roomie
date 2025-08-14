// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from roomie_msgs:msg/Obstacle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "roomie_msgs/msg/obstacle.hpp"


#ifndef ROOMIE_MSGS__MSG__DETAIL__OBSTACLE__BUILDER_HPP_
#define ROOMIE_MSGS__MSG__DETAIL__OBSTACLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "roomie_msgs/msg/detail/obstacle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace roomie_msgs
{

namespace msg
{

namespace builder
{

class Init_Obstacle_depth
{
public:
  explicit Init_Obstacle_depth(::roomie_msgs::msg::Obstacle & msg)
  : msg_(msg)
  {}
  ::roomie_msgs::msg::Obstacle depth(::roomie_msgs::msg::Obstacle::_depth_type arg)
  {
    msg_.depth = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roomie_msgs::msg::Obstacle msg_;
};

class Init_Obstacle_y
{
public:
  explicit Init_Obstacle_y(::roomie_msgs::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_depth y(::roomie_msgs::msg::Obstacle::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Obstacle_depth(msg_);
  }

private:
  ::roomie_msgs::msg::Obstacle msg_;
};

class Init_Obstacle_x
{
public:
  explicit Init_Obstacle_x(::roomie_msgs::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_y x(::roomie_msgs::msg::Obstacle::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Obstacle_y(msg_);
  }

private:
  ::roomie_msgs::msg::Obstacle msg_;
};

class Init_Obstacle_dynamic
{
public:
  explicit Init_Obstacle_dynamic(::roomie_msgs::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_x dynamic(::roomie_msgs::msg::Obstacle::_dynamic_type arg)
  {
    msg_.dynamic = std::move(arg);
    return Init_Obstacle_x(msg_);
  }

private:
  ::roomie_msgs::msg::Obstacle msg_;
};

class Init_Obstacle_robot_id
{
public:
  Init_Obstacle_robot_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Obstacle_dynamic robot_id(::roomie_msgs::msg::Obstacle::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_Obstacle_dynamic(msg_);
  }

private:
  ::roomie_msgs::msg::Obstacle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::roomie_msgs::msg::Obstacle>()
{
  return roomie_msgs::msg::builder::Init_Obstacle_robot_id();
}

}  // namespace roomie_msgs

#endif  // ROOMIE_MSGS__MSG__DETAIL__OBSTACLE__BUILDER_HPP_
