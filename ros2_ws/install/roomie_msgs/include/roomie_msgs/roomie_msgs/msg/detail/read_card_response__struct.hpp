// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from roomie_msgs:msg/ReadCardResponse.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "roomie_msgs/msg/read_card_response.hpp"


#ifndef ROOMIE_MSGS__MSG__DETAIL__READ_CARD_RESPONSE__STRUCT_HPP_
#define ROOMIE_MSGS__MSG__DETAIL__READ_CARD_RESPONSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__roomie_msgs__msg__ReadCardResponse __attribute__((deprecated))
#else
# define DEPRECATED__roomie_msgs__msg__ReadCardResponse __declspec(deprecated)
#endif

namespace roomie_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ReadCardResponse_
{
  using Type = ReadCardResponse_<ContainerAllocator>;

  explicit ReadCardResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = 0l;
      this->success = false;
      this->location_id = 0l;
    }
  }

  explicit ReadCardResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = 0l;
      this->success = false;
      this->location_id = 0l;
    }
  }

  // field types and members
  using _robot_id_type =
    int32_t;
  _robot_id_type robot_id;
  using _success_type =
    bool;
  _success_type success;
  using _location_id_type =
    int32_t;
  _location_id_type location_id;

  // setters for named parameter idiom
  Type & set__robot_id(
    const int32_t & _arg)
  {
    this->robot_id = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__location_id(
    const int32_t & _arg)
  {
    this->location_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    roomie_msgs::msg::ReadCardResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const roomie_msgs::msg::ReadCardResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<roomie_msgs::msg::ReadCardResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<roomie_msgs::msg::ReadCardResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      roomie_msgs::msg::ReadCardResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<roomie_msgs::msg::ReadCardResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      roomie_msgs::msg::ReadCardResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<roomie_msgs::msg::ReadCardResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<roomie_msgs::msg::ReadCardResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<roomie_msgs::msg::ReadCardResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__roomie_msgs__msg__ReadCardResponse
    std::shared_ptr<roomie_msgs::msg::ReadCardResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__roomie_msgs__msg__ReadCardResponse
    std::shared_ptr<roomie_msgs::msg::ReadCardResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReadCardResponse_ & other) const
  {
    if (this->robot_id != other.robot_id) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    if (this->location_id != other.location_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReadCardResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReadCardResponse_

// alias to use template instance with default allocator
using ReadCardResponse =
  roomie_msgs::msg::ReadCardResponse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace roomie_msgs

#endif  // ROOMIE_MSGS__MSG__DETAIL__READ_CARD_RESPONSE__STRUCT_HPP_
