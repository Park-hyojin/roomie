// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from roomie_msgs:msg/ReadCardResponse.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "roomie_msgs/msg/read_card_response.hpp"


#ifndef ROOMIE_MSGS__MSG__DETAIL__READ_CARD_RESPONSE__BUILDER_HPP_
#define ROOMIE_MSGS__MSG__DETAIL__READ_CARD_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "roomie_msgs/msg/detail/read_card_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace roomie_msgs
{

namespace msg
{

namespace builder
{

class Init_ReadCardResponse_location_id
{
public:
  explicit Init_ReadCardResponse_location_id(::roomie_msgs::msg::ReadCardResponse & msg)
  : msg_(msg)
  {}
  ::roomie_msgs::msg::ReadCardResponse location_id(::roomie_msgs::msg::ReadCardResponse::_location_id_type arg)
  {
    msg_.location_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roomie_msgs::msg::ReadCardResponse msg_;
};

class Init_ReadCardResponse_success
{
public:
  explicit Init_ReadCardResponse_success(::roomie_msgs::msg::ReadCardResponse & msg)
  : msg_(msg)
  {}
  Init_ReadCardResponse_location_id success(::roomie_msgs::msg::ReadCardResponse::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ReadCardResponse_location_id(msg_);
  }

private:
  ::roomie_msgs::msg::ReadCardResponse msg_;
};

class Init_ReadCardResponse_robot_id
{
public:
  Init_ReadCardResponse_robot_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReadCardResponse_success robot_id(::roomie_msgs::msg::ReadCardResponse::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_ReadCardResponse_success(msg_);
  }

private:
  ::roomie_msgs::msg::ReadCardResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::roomie_msgs::msg::ReadCardResponse>()
{
  return roomie_msgs::msg::builder::Init_ReadCardResponse_robot_id();
}

}  // namespace roomie_msgs

#endif  // ROOMIE_MSGS__MSG__DETAIL__READ_CARD_RESPONSE__BUILDER_HPP_
