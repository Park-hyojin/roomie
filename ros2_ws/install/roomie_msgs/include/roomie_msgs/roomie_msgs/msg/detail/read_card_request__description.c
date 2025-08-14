// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from roomie_msgs:msg/ReadCardRequest.idl
// generated code does not contain a copyright notice

#include "roomie_msgs/msg/detail/read_card_request__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_roomie_msgs
const rosidl_type_hash_t *
roomie_msgs__msg__ReadCardRequest__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x12, 0x43, 0x92, 0x78, 0x84, 0x67, 0x45, 0xfc,
      0x38, 0xbb, 0x6f, 0x68, 0xda, 0x56, 0xda, 0x67,
      0xff, 0xe3, 0xbe, 0x8a, 0x29, 0x51, 0x64, 0x5f,
      0xcd, 0xbe, 0x94, 0x48, 0xb0, 0x8f, 0xa9, 0x4d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char roomie_msgs__msg__ReadCardRequest__TYPE_NAME[] = "roomie_msgs/msg/ReadCardRequest";

// Define type names, field names, and default values
static char roomie_msgs__msg__ReadCardRequest__FIELD_NAME__robot_id[] = "robot_id";

static rosidl_runtime_c__type_description__Field roomie_msgs__msg__ReadCardRequest__FIELDS[] = {
  {
    {roomie_msgs__msg__ReadCardRequest__FIELD_NAME__robot_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
roomie_msgs__msg__ReadCardRequest__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {roomie_msgs__msg__ReadCardRequest__TYPE_NAME, 31, 31},
      {roomie_msgs__msg__ReadCardRequest__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 robot_id";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
roomie_msgs__msg__ReadCardRequest__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {roomie_msgs__msg__ReadCardRequest__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 15, 15},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
roomie_msgs__msg__ReadCardRequest__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *roomie_msgs__msg__ReadCardRequest__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
