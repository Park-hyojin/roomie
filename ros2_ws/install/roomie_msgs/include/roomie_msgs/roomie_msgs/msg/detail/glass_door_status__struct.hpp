// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from roomie_msgs:msg/GlassDoorStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "roomie_msgs/msg/glass_door_status.hpp"


#ifndef ROOMIE_MSGS__MSG__DETAIL__GLASS_DOOR_STATUS__STRUCT_HPP_
#define ROOMIE_MSGS__MSG__DETAIL__GLASS_DOOR_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__roomie_msgs__msg__GlassDoorStatus __attribute__((deprecated))
#else
# define DEPRECATED__roomie_msgs__msg__GlassDoorStatus __declspec(deprecated)
#endif

namespace roomie_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GlassDoorStatus_
{
  using Type = GlassDoorStatus_<ContainerAllocator>;

  explicit GlassDoorStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = 0l;
      this->opened = false;
    }
  }

  explicit GlassDoorStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = 0l;
      this->opened = false;
    }
  }

  // field types and members
  using _robot_id_type =
    int32_t;
  _robot_id_type robot_id;
  using _opened_type =
    bool;
  _opened_type opened;

  // setters for named parameter idiom
  Type & set__robot_id(
    const int32_t & _arg)
  {
    this->robot_id = _arg;
    return *this;
  }
  Type & set__opened(
    const bool & _arg)
  {
    this->opened = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    roomie_msgs::msg::GlassDoorStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const roomie_msgs::msg::GlassDoorStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<roomie_msgs::msg::GlassDoorStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<roomie_msgs::msg::GlassDoorStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      roomie_msgs::msg::GlassDoorStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<roomie_msgs::msg::GlassDoorStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      roomie_msgs::msg::GlassDoorStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<roomie_msgs::msg::GlassDoorStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<roomie_msgs::msg::GlassDoorStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<roomie_msgs::msg::GlassDoorStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__roomie_msgs__msg__GlassDoorStatus
    std::shared_ptr<roomie_msgs::msg::GlassDoorStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__roomie_msgs__msg__GlassDoorStatus
    std::shared_ptr<roomie_msgs::msg::GlassDoorStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GlassDoorStatus_ & other) const
  {
    if (this->robot_id != other.robot_id) {
      return false;
    }
    if (this->opened != other.opened) {
      return false;
    }
    return true;
  }
  bool operator!=(const GlassDoorStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GlassDoorStatus_

// alias to use template instance with default allocator
using GlassDoorStatus =
  roomie_msgs::msg::GlassDoorStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace roomie_msgs

#endif  // ROOMIE_MSGS__MSG__DETAIL__GLASS_DOOR_STATUS__STRUCT_HPP_
