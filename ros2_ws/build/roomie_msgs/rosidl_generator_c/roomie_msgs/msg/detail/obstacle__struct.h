// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from roomie_msgs:msg/Obstacle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "roomie_msgs/msg/obstacle.h"


#ifndef ROOMIE_MSGS__MSG__DETAIL__OBSTACLE__STRUCT_H_
#define ROOMIE_MSGS__MSG__DETAIL__OBSTACLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Obstacle in the package roomie_msgs.
/**
  * Obstacle.msg
 */
typedef struct roomie_msgs__msg__Obstacle
{
  int32_t robot_id;
  bool dynamic;
  float x;
  float y;
  float depth;
} roomie_msgs__msg__Obstacle;

// Struct for a sequence of roomie_msgs__msg__Obstacle.
typedef struct roomie_msgs__msg__Obstacle__Sequence
{
  roomie_msgs__msg__Obstacle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} roomie_msgs__msg__Obstacle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROOMIE_MSGS__MSG__DETAIL__OBSTACLE__STRUCT_H_
