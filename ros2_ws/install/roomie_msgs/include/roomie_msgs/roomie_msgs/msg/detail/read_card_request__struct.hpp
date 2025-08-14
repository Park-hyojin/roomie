// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from roomie_msgs:msg/ReadCardRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "roomie_msgs/msg/read_card_request.hpp"


#ifndef ROOMIE_MSGS__MSG__DETAIL__READ_CARD_REQUEST__STRUCT_HPP_
#define ROOMIE_MSGS__MSG__DETAIL__READ_CARD_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__roomie_msgs__msg__ReadCardRequest __attribute__((deprecated))
#else
# define DEPRECATED__roomie_msgs__msg__ReadCardRequest __declspec(deprecated)
#endif

namespace roomie_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ReadCardRequest_
{
  using Type = ReadCardRequest_<ContainerAllocator>;

  explicit ReadCardRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = 0l;
    }
  }

  explicit ReadCardRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = 0l;
    }
  }

  // field types and members
  using _robot_id_type =
    int32_t;
  _robot_id_type robot_id;

  // setters for named parameter idiom
  Type & set__robot_id(
    const int32_t & _arg)
  {
    this->robot_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    roomie_msgs::msg::ReadCardRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const roomie_msgs::msg::ReadCardRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<roomie_msgs::msg::ReadCardRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<roomie_msgs::msg::ReadCardRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      roomie_msgs::msg::ReadCardRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<roomie_msgs::msg::ReadCardRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      roomie_msgs::msg::ReadCardRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<roomie_msgs::msg::ReadCardRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<roomie_msgs::msg::ReadCardRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<roomie_msgs::msg::ReadCardRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__roomie_msgs__msg__ReadCardRequest
    std::shared_ptr<roomie_msgs::msg::ReadCardRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__roomie_msgs__msg__ReadCardRequest
    std::shared_ptr<roomie_msgs::msg::ReadCardRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReadCardRequest_ & other) const
  {
    if (this->robot_id != other.robot_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReadCardRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReadCardRequest_

// alias to use template instance with default allocator
using ReadCardRequest =
  roomie_msgs::msg::ReadCardRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace roomie_msgs

#endif  // ROOMIE_MSGS__MSG__DETAIL__READ_CARD_REQUEST__STRUCT_HPP_
