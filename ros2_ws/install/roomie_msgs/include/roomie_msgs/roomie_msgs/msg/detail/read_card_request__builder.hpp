// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from roomie_msgs:msg/ReadCardRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "roomie_msgs/msg/read_card_request.hpp"


#ifndef ROOMIE_MSGS__MSG__DETAIL__READ_CARD_REQUEST__BUILDER_HPP_
#define ROOMIE_MSGS__MSG__DETAIL__READ_CARD_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "roomie_msgs/msg/detail/read_card_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace roomie_msgs
{

namespace msg
{

namespace builder
{

class Init_ReadCardRequest_robot_id
{
public:
  Init_ReadCardRequest_robot_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::roomie_msgs::msg::ReadCardRequest robot_id(::roomie_msgs::msg::ReadCardRequest::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roomie_msgs::msg::ReadCardRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::roomie_msgs::msg::ReadCardRequest>()
{
  return roomie_msgs::msg::builder::Init_ReadCardRequest_robot_id();
}

}  // namespace roomie_msgs

#endif  // ROOMIE_MSGS__MSG__DETAIL__READ_CARD_REQUEST__BUILDER_HPP_
