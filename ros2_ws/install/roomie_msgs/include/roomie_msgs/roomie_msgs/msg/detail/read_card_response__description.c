// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from roomie_msgs:msg/ReadCardResponse.idl
// generated code does not contain a copyright notice

#include "roomie_msgs/msg/detail/read_card_response__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_roomie_msgs
const rosidl_type_hash_t *
roomie_msgs__msg__ReadCardResponse__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf6, 0x83, 0x70, 0xc6, 0xc6, 0xb8, 0x9a, 0xca,
      0xff, 0x53, 0x5d, 0x7e, 0xf3, 0xfa, 0xd0, 0xc7,
      0x77, 0x16, 0xfc, 0x93, 0x51, 0x2d, 0x59, 0xc8,
      0x5a, 0x86, 0xd1, 0x07, 0x7e, 0x49, 0xd4, 0x7d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char roomie_msgs__msg__ReadCardResponse__TYPE_NAME[] = "roomie_msgs/msg/ReadCardResponse";

// Define type names, field names, and default values
static char roomie_msgs__msg__ReadCardResponse__FIELD_NAME__robot_id[] = "robot_id";
static char roomie_msgs__msg__ReadCardResponse__FIELD_NAME__success[] = "success";
static char roomie_msgs__msg__ReadCardResponse__FIELD_NAME__location_id[] = "location_id";

static rosidl_runtime_c__type_description__Field roomie_msgs__msg__ReadCardResponse__FIELDS[] = {
  {
    {roomie_msgs__msg__ReadCardResponse__FIELD_NAME__robot_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomie_msgs__msg__ReadCardResponse__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomie_msgs__msg__ReadCardResponse__FIELD_NAME__location_id, 11, 11},
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
roomie_msgs__msg__ReadCardResponse__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {roomie_msgs__msg__ReadCardResponse__TYPE_NAME, 32, 32},
      {roomie_msgs__msg__ReadCardResponse__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 robot_id\n"
  "bool success\n"
  "int32 location_id";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
roomie_msgs__msg__ReadCardResponse__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {roomie_msgs__msg__ReadCardResponse__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 46, 46},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
roomie_msgs__msg__ReadCardResponse__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *roomie_msgs__msg__ReadCardResponse__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
