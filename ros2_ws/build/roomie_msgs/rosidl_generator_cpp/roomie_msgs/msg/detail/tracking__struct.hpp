// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from roomie_msgs:msg/Tracking.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "roomie_msgs/msg/tracking.hpp"


#ifndef ROOMIE_MSGS__MSG__DETAIL__TRACKING__STRUCT_HPP_
#define ROOMIE_MSGS__MSG__DETAIL__TRACKING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__roomie_msgs__msg__Tracking __attribute__((deprecated))
#else
# define DEPRECATED__roomie_msgs__msg__Tracking __declspec(deprecated)
#endif

namespace roomie_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Tracking_
{
  using Type = Tracking_<ContainerAllocator>;

  explicit Tracking_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->event = 0l;
    }
  }

  explicit Tracking_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->event = 0l;
    }
  }

  // field types and members
  using _id_type =
    int32_t;
  _id_type id;
  using _event_type =
    int32_t;
  _event_type event;

  // setters for named parameter idiom
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__event(
    const int32_t & _arg)
  {
    this->event = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    roomie_msgs::msg::Tracking_<ContainerAllocator> *;
  using ConstRawPtr =
    const roomie_msgs::msg::Tracking_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<roomie_msgs::msg::Tracking_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<roomie_msgs::msg::Tracking_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      roomie_msgs::msg::Tracking_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<roomie_msgs::msg::Tracking_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      roomie_msgs::msg::Tracking_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<roomie_msgs::msg::Tracking_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<roomie_msgs::msg::Tracking_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<roomie_msgs::msg::Tracking_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__roomie_msgs__msg__Tracking
    std::shared_ptr<roomie_msgs::msg::Tracking_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__roomie_msgs__msg__Tracking
    std::shared_ptr<roomie_msgs::msg::Tracking_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Tracking_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->event != other.event) {
      return false;
    }
    return true;
  }
  bool operator!=(const Tracking_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Tracking_

// alias to use template instance with default allocator
using Tracking =
  roomie_msgs::msg::Tracking_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace roomie_msgs

#endif  // ROOMIE_MSGS__MSG__DETAIL__TRACKING__STRUCT_HPP_
