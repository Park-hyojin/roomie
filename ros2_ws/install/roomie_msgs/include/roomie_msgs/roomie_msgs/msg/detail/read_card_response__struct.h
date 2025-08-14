// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from roomie_msgs:msg/ReadCardResponse.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "roomie_msgs/msg/read_card_response.h"


#ifndef ROOMIE_MSGS__MSG__DETAIL__READ_CARD_RESPONSE__STRUCT_H_
#define ROOMIE_MSGS__MSG__DETAIL__READ_CARD_RESPONSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/ReadCardResponse in the package roomie_msgs.
typedef struct roomie_msgs__msg__ReadCardResponse
{
  int32_t robot_id;
  bool success;
  int32_t location_id;
} roomie_msgs__msg__ReadCardResponse;

// Struct for a sequence of roomie_msgs__msg__ReadCardResponse.
typedef struct roomie_msgs__msg__ReadCardResponse__Sequence
{
  roomie_msgs__msg__ReadCardResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} roomie_msgs__msg__ReadCardResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROOMIE_MSGS__MSG__DETAIL__READ_CARD_RESPONSE__STRUCT_H_
