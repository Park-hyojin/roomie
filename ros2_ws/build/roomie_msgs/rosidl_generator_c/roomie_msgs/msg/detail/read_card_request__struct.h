// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from roomie_msgs:msg/ReadCardRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "roomie_msgs/msg/read_card_request.h"


#ifndef ROOMIE_MSGS__MSG__DETAIL__READ_CARD_REQUEST__STRUCT_H_
#define ROOMIE_MSGS__MSG__DETAIL__READ_CARD_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/ReadCardRequest in the package roomie_msgs.
typedef struct roomie_msgs__msg__ReadCardRequest
{
  int32_t robot_id;
} roomie_msgs__msg__ReadCardRequest;

// Struct for a sequence of roomie_msgs__msg__ReadCardRequest.
typedef struct roomie_msgs__msg__ReadCardRequest__Sequence
{
  roomie_msgs__msg__ReadCardRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} roomie_msgs__msg__ReadCardRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROOMIE_MSGS__MSG__DETAIL__READ_CARD_REQUEST__STRUCT_H_
