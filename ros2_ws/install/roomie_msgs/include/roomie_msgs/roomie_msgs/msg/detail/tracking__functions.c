// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from roomie_msgs:msg/Tracking.idl
// generated code does not contain a copyright notice
#include "roomie_msgs/msg/detail/tracking__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
roomie_msgs__msg__Tracking__init(roomie_msgs__msg__Tracking * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // event
  return true;
}

void
roomie_msgs__msg__Tracking__fini(roomie_msgs__msg__Tracking * msg)
{
  if (!msg) {
    return;
  }
  // id
  // event
}

bool
roomie_msgs__msg__Tracking__are_equal(const roomie_msgs__msg__Tracking * lhs, const roomie_msgs__msg__Tracking * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // event
  if (lhs->event != rhs->event) {
    return false;
  }
  return true;
}

bool
roomie_msgs__msg__Tracking__copy(
  const roomie_msgs__msg__Tracking * input,
  roomie_msgs__msg__Tracking * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // event
  output->event = input->event;
  return true;
}

roomie_msgs__msg__Tracking *
roomie_msgs__msg__Tracking__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roomie_msgs__msg__Tracking * msg = (roomie_msgs__msg__Tracking *)allocator.allocate(sizeof(roomie_msgs__msg__Tracking), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(roomie_msgs__msg__Tracking));
  bool success = roomie_msgs__msg__Tracking__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
roomie_msgs__msg__Tracking__destroy(roomie_msgs__msg__Tracking * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    roomie_msgs__msg__Tracking__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
roomie_msgs__msg__Tracking__Sequence__init(roomie_msgs__msg__Tracking__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roomie_msgs__msg__Tracking * data = NULL;

  if (size) {
    data = (roomie_msgs__msg__Tracking *)allocator.zero_allocate(size, sizeof(roomie_msgs__msg__Tracking), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = roomie_msgs__msg__Tracking__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        roomie_msgs__msg__Tracking__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
roomie_msgs__msg__Tracking__Sequence__fini(roomie_msgs__msg__Tracking__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      roomie_msgs__msg__Tracking__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

roomie_msgs__msg__Tracking__Sequence *
roomie_msgs__msg__Tracking__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roomie_msgs__msg__Tracking__Sequence * array = (roomie_msgs__msg__Tracking__Sequence *)allocator.allocate(sizeof(roomie_msgs__msg__Tracking__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = roomie_msgs__msg__Tracking__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
roomie_msgs__msg__Tracking__Sequence__destroy(roomie_msgs__msg__Tracking__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    roomie_msgs__msg__Tracking__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
roomie_msgs__msg__Tracking__Sequence__are_equal(const roomie_msgs__msg__Tracking__Sequence * lhs, const roomie_msgs__msg__Tracking__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!roomie_msgs__msg__Tracking__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
roomie_msgs__msg__Tracking__Sequence__copy(
  const roomie_msgs__msg__Tracking__Sequence * input,
  roomie_msgs__msg__Tracking__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(roomie_msgs__msg__Tracking);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    roomie_msgs__msg__Tracking * data =
      (roomie_msgs__msg__Tracking *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!roomie_msgs__msg__Tracking__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          roomie_msgs__msg__Tracking__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!roomie_msgs__msg__Tracking__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
