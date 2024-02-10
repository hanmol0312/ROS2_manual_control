// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_msgs:msg/Board.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/board__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
custom_msgs__msg__Board__init(custom_msgs__msg__Board * msg)
{
  if (!msg) {
    return false;
  }
  // key_up
  // key_down
  // key_left
  // key_right
  // key_left_shift
  // key_left_ctrl
  // w
  // a
  // s
  // d
  // q
  // e
  // c
  // x
  // z
  // j
  return true;
}

void
custom_msgs__msg__Board__fini(custom_msgs__msg__Board * msg)
{
  if (!msg) {
    return;
  }
  // key_up
  // key_down
  // key_left
  // key_right
  // key_left_shift
  // key_left_ctrl
  // w
  // a
  // s
  // d
  // q
  // e
  // c
  // x
  // z
  // j
}

bool
custom_msgs__msg__Board__are_equal(const custom_msgs__msg__Board * lhs, const custom_msgs__msg__Board * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // key_up
  if (lhs->key_up != rhs->key_up) {
    return false;
  }
  // key_down
  if (lhs->key_down != rhs->key_down) {
    return false;
  }
  // key_left
  if (lhs->key_left != rhs->key_left) {
    return false;
  }
  // key_right
  if (lhs->key_right != rhs->key_right) {
    return false;
  }
  // key_left_shift
  if (lhs->key_left_shift != rhs->key_left_shift) {
    return false;
  }
  // key_left_ctrl
  if (lhs->key_left_ctrl != rhs->key_left_ctrl) {
    return false;
  }
  // w
  if (lhs->w != rhs->w) {
    return false;
  }
  // a
  if (lhs->a != rhs->a) {
    return false;
  }
  // s
  if (lhs->s != rhs->s) {
    return false;
  }
  // d
  if (lhs->d != rhs->d) {
    return false;
  }
  // q
  if (lhs->q != rhs->q) {
    return false;
  }
  // e
  if (lhs->e != rhs->e) {
    return false;
  }
  // c
  if (lhs->c != rhs->c) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // j
  if (lhs->j != rhs->j) {
    return false;
  }
  return true;
}

bool
custom_msgs__msg__Board__copy(
  const custom_msgs__msg__Board * input,
  custom_msgs__msg__Board * output)
{
  if (!input || !output) {
    return false;
  }
  // key_up
  output->key_up = input->key_up;
  // key_down
  output->key_down = input->key_down;
  // key_left
  output->key_left = input->key_left;
  // key_right
  output->key_right = input->key_right;
  // key_left_shift
  output->key_left_shift = input->key_left_shift;
  // key_left_ctrl
  output->key_left_ctrl = input->key_left_ctrl;
  // w
  output->w = input->w;
  // a
  output->a = input->a;
  // s
  output->s = input->s;
  // d
  output->d = input->d;
  // q
  output->q = input->q;
  // e
  output->e = input->e;
  // c
  output->c = input->c;
  // x
  output->x = input->x;
  // z
  output->z = input->z;
  // j
  output->j = input->j;
  return true;
}

custom_msgs__msg__Board *
custom_msgs__msg__Board__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__Board * msg = (custom_msgs__msg__Board *)allocator.allocate(sizeof(custom_msgs__msg__Board), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_msgs__msg__Board));
  bool success = custom_msgs__msg__Board__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_msgs__msg__Board__destroy(custom_msgs__msg__Board * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_msgs__msg__Board__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_msgs__msg__Board__Sequence__init(custom_msgs__msg__Board__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__Board * data = NULL;

  if (size) {
    data = (custom_msgs__msg__Board *)allocator.zero_allocate(size, sizeof(custom_msgs__msg__Board), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_msgs__msg__Board__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_msgs__msg__Board__fini(&data[i - 1]);
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
custom_msgs__msg__Board__Sequence__fini(custom_msgs__msg__Board__Sequence * array)
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
      custom_msgs__msg__Board__fini(&array->data[i]);
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

custom_msgs__msg__Board__Sequence *
custom_msgs__msg__Board__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__Board__Sequence * array = (custom_msgs__msg__Board__Sequence *)allocator.allocate(sizeof(custom_msgs__msg__Board__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_msgs__msg__Board__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_msgs__msg__Board__Sequence__destroy(custom_msgs__msg__Board__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_msgs__msg__Board__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_msgs__msg__Board__Sequence__are_equal(const custom_msgs__msg__Board__Sequence * lhs, const custom_msgs__msg__Board__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_msgs__msg__Board__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_msgs__msg__Board__Sequence__copy(
  const custom_msgs__msg__Board__Sequence * input,
  custom_msgs__msg__Board__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_msgs__msg__Board);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custom_msgs__msg__Board * data =
      (custom_msgs__msg__Board *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_msgs__msg__Board__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custom_msgs__msg__Board__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_msgs__msg__Board__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
