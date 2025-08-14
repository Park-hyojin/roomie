// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from roomie_msgs:msg/Obstacle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "roomie_msgs/msg/obstacle.hpp"


#ifndef ROOMIE_MSGS__MSG__DETAIL__OBSTACLE__TRAITS_HPP_
#define ROOMIE_MSGS__MSG__DETAIL__OBSTACLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "roomie_msgs/msg/detail/obstacle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace roomie_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Obstacle & msg,
  std::ostream & out)
{
  out << "{";
  // member: robot_id
  {
    out << "robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id, out);
    out << ", ";
  }

  // member: dynamic
  {
    out << "dynamic: ";
    rosidl_generator_traits::value_to_yaml(msg.dynamic, out);
    out << ", ";
  }

  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: depth
  {
    out << "depth: ";
    rosidl_generator_traits::value_to_yaml(msg.depth, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Obstacle & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: robot_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id, out);
    out << "\n";
  }

  // member: dynamic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dynamic: ";
    rosidl_generator_traits::value_to_yaml(msg.dynamic, out);
    out << "\n";
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: depth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "depth: ";
    rosidl_generator_traits::value_to_yaml(msg.depth, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Obstacle & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace roomie_msgs

namespace rosidl_generator_traits
{

[[deprecated("use roomie_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const roomie_msgs::msg::Obstacle & msg,
  std::ostream & out, size_t indentation = 0)
{
  roomie_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use roomie_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const roomie_msgs::msg::Obstacle & msg)
{
  return roomie_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<roomie_msgs::msg::Obstacle>()
{
  return "roomie_msgs::msg::Obstacle";
}

template<>
inline const char * name<roomie_msgs::msg::Obstacle>()
{
  return "roomie_msgs/msg/Obstacle";
}

template<>
struct has_fixed_size<roomie_msgs::msg::Obstacle>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<roomie_msgs::msg::Obstacle>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<roomie_msgs::msg::Obstacle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROOMIE_MSGS__MSG__DETAIL__OBSTACLE__TRAITS_HPP_
