// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from roomie_msgs:msg/GlassDoorStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "roomie_msgs/msg/glass_door_status.h"


#ifndef ROOMIE_MSGS__MSG__DETAIL__GLASS_DOOR_STATUS__STRUCT_H_
#define ROOMIE_MSGS__MSG__DETAIL__GLASS_DOOR_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/GlassDoorStatus in the package roomie_msgs.
/**
  * GlassDoorStatus.msg
 */
typedef struct roomie_msgs__msg__GlassDoorStatus
{
  int32_t robot_id;
  bool opened;
} roomie_msgs__msg__GlassDoorStatus;

// Struct for a sequence of roomie_msgs__msg__GlassDoorStatus.
typedef struct roomie_msgs__msg__GlassDoorStatus__Sequence
{
  roomie_msgs__msg__GlassDoorStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} roomie_msgs__msg__GlassDoorStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROOMIE_MSGS__MSG__DETAIL__GLASS_DOOR_STATUS__STRUCT_H_
