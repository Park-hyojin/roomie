// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from roomie_msgs:msg/GlassDoorStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "roomie_msgs/msg/detail/glass_door_status__functions.h"
#include "roomie_msgs/msg/detail/glass_door_status__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace roomie_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void GlassDoorStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) roomie_msgs::msg::GlassDoorStatus(_init);
}

void GlassDoorStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<roomie_msgs::msg::GlassDoorStatus *>(message_memory);
  typed_message->~GlassDoorStatus();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GlassDoorStatus_message_member_array[2] = {
  {
    "robot_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roomie_msgs::msg::GlassDoorStatus, robot_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "opened",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roomie_msgs::msg::GlassDoorStatus, opened),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GlassDoorStatus_message_members = {
  "roomie_msgs::msg",  // message namespace
  "GlassDoorStatus",  // message name
  2,  // number of fields
  sizeof(roomie_msgs::msg::GlassDoorStatus),
  false,  // has_any_key_member_
  GlassDoorStatus_message_member_array,  // message members
  GlassDoorStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  GlassDoorStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GlassDoorStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GlassDoorStatus_message_members,
  get_message_typesupport_handle_function,
  &roomie_msgs__msg__GlassDoorStatus__get_type_hash,
  &roomie_msgs__msg__GlassDoorStatus__get_type_description,
  &roomie_msgs__msg__GlassDoorStatus__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace roomie_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<roomie_msgs::msg::GlassDoorStatus>()
{
  return &::roomie_msgs::msg::rosidl_typesupport_introspection_cpp::GlassDoorStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, roomie_msgs, msg, GlassDoorStatus)() {
  return &::roomie_msgs::msg::rosidl_typesupport_introspection_cpp::GlassDoorStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
