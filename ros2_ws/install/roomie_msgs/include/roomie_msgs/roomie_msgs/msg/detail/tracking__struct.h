// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from roomie_msgs:msg/Tracking.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "roomie_msgs/msg/tracking.h"


#ifndef ROOMIE_MSGS__MSG__DETAIL__TRACKING__STRUCT_H_
#define ROOMIE_MSGS__MSG__DETAIL__TRACKING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Tracking in the package roomie_msgs.
typedef struct roomie_msgs__msg__Tracking
{
  int32_t id;
  /// 0=NONE, 1=LOST, 2=REACQUIRED
  int32_t event;
} roomie_msgs__msg__Tracking;

// Struct for a sequence of roomie_msgs__msg__Tracking.
typedef struct roomie_msgs__msg__Tracking__Sequence
{
  roomie_msgs__msg__Tracking * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} roomie_msgs__msg__Tracking__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROOMIE_MSGS__MSG__DETAIL__TRACKING__STRUCT_H_
