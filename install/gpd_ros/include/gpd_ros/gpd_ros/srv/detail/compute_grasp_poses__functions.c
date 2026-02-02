// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gpd_ros:srv/ComputeGraspPoses.idl
// generated code does not contain a copyright notice
#include "gpd_ros/srv/detail/compute_grasp_poses__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `grasps`
#include "gpd_ros/msg/detail/grasp_config_list__functions.h"

bool
gpd_ros__srv__ComputeGraspPoses_Request__init(gpd_ros__srv__ComputeGraspPoses_Request * msg)
{
  if (!msg) {
    return false;
  }
  // grasps
  if (!gpd_ros__msg__GraspConfigList__init(&msg->grasps)) {
    gpd_ros__srv__ComputeGraspPoses_Request__fini(msg);
    return false;
  }
  return true;
}

void
gpd_ros__srv__ComputeGraspPoses_Request__fini(gpd_ros__srv__ComputeGraspPoses_Request * msg)
{
  if (!msg) {
    return;
  }
  // grasps
  gpd_ros__msg__GraspConfigList__fini(&msg->grasps);
}

bool
gpd_ros__srv__ComputeGraspPoses_Request__are_equal(const gpd_ros__srv__ComputeGraspPoses_Request * lhs, const gpd_ros__srv__ComputeGraspPoses_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // grasps
  if (!gpd_ros__msg__GraspConfigList__are_equal(
      &(lhs->grasps), &(rhs->grasps)))
  {
    return false;
  }
  return true;
}

bool
gpd_ros__srv__ComputeGraspPoses_Request__copy(
  const gpd_ros__srv__ComputeGraspPoses_Request * input,
  gpd_ros__srv__ComputeGraspPoses_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // grasps
  if (!gpd_ros__msg__GraspConfigList__copy(
      &(input->grasps), &(output->grasps)))
  {
    return false;
  }
  return true;
}

gpd_ros__srv__ComputeGraspPoses_Request *
gpd_ros__srv__ComputeGraspPoses_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gpd_ros__srv__ComputeGraspPoses_Request * msg = (gpd_ros__srv__ComputeGraspPoses_Request *)allocator.allocate(sizeof(gpd_ros__srv__ComputeGraspPoses_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gpd_ros__srv__ComputeGraspPoses_Request));
  bool success = gpd_ros__srv__ComputeGraspPoses_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gpd_ros__srv__ComputeGraspPoses_Request__destroy(gpd_ros__srv__ComputeGraspPoses_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gpd_ros__srv__ComputeGraspPoses_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gpd_ros__srv__ComputeGraspPoses_Request__Sequence__init(gpd_ros__srv__ComputeGraspPoses_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gpd_ros__srv__ComputeGraspPoses_Request * data = NULL;

  if (size) {
    data = (gpd_ros__srv__ComputeGraspPoses_Request *)allocator.zero_allocate(size, sizeof(gpd_ros__srv__ComputeGraspPoses_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gpd_ros__srv__ComputeGraspPoses_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gpd_ros__srv__ComputeGraspPoses_Request__fini(&data[i - 1]);
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
gpd_ros__srv__ComputeGraspPoses_Request__Sequence__fini(gpd_ros__srv__ComputeGraspPoses_Request__Sequence * array)
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
      gpd_ros__srv__ComputeGraspPoses_Request__fini(&array->data[i]);
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

gpd_ros__srv__ComputeGraspPoses_Request__Sequence *
gpd_ros__srv__ComputeGraspPoses_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gpd_ros__srv__ComputeGraspPoses_Request__Sequence * array = (gpd_ros__srv__ComputeGraspPoses_Request__Sequence *)allocator.allocate(sizeof(gpd_ros__srv__ComputeGraspPoses_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gpd_ros__srv__ComputeGraspPoses_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gpd_ros__srv__ComputeGraspPoses_Request__Sequence__destroy(gpd_ros__srv__ComputeGraspPoses_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gpd_ros__srv__ComputeGraspPoses_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gpd_ros__srv__ComputeGraspPoses_Request__Sequence__are_equal(const gpd_ros__srv__ComputeGraspPoses_Request__Sequence * lhs, const gpd_ros__srv__ComputeGraspPoses_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gpd_ros__srv__ComputeGraspPoses_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gpd_ros__srv__ComputeGraspPoses_Request__Sequence__copy(
  const gpd_ros__srv__ComputeGraspPoses_Request__Sequence * input,
  gpd_ros__srv__ComputeGraspPoses_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gpd_ros__srv__ComputeGraspPoses_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gpd_ros__srv__ComputeGraspPoses_Request * data =
      (gpd_ros__srv__ComputeGraspPoses_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gpd_ros__srv__ComputeGraspPoses_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gpd_ros__srv__ComputeGraspPoses_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gpd_ros__srv__ComputeGraspPoses_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `target_poses`
// Member `approach_poses`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
gpd_ros__srv__ComputeGraspPoses_Response__init(gpd_ros__srv__ComputeGraspPoses_Response * msg)
{
  if (!msg) {
    return false;
  }
  // target_poses
  if (!geometry_msgs__msg__Pose__Sequence__init(&msg->target_poses, 0)) {
    gpd_ros__srv__ComputeGraspPoses_Response__fini(msg);
    return false;
  }
  // approach_poses
  if (!geometry_msgs__msg__Pose__Sequence__init(&msg->approach_poses, 0)) {
    gpd_ros__srv__ComputeGraspPoses_Response__fini(msg);
    return false;
  }
  return true;
}

void
gpd_ros__srv__ComputeGraspPoses_Response__fini(gpd_ros__srv__ComputeGraspPoses_Response * msg)
{
  if (!msg) {
    return;
  }
  // target_poses
  geometry_msgs__msg__Pose__Sequence__fini(&msg->target_poses);
  // approach_poses
  geometry_msgs__msg__Pose__Sequence__fini(&msg->approach_poses);
}

bool
gpd_ros__srv__ComputeGraspPoses_Response__are_equal(const gpd_ros__srv__ComputeGraspPoses_Response * lhs, const gpd_ros__srv__ComputeGraspPoses_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target_poses
  if (!geometry_msgs__msg__Pose__Sequence__are_equal(
      &(lhs->target_poses), &(rhs->target_poses)))
  {
    return false;
  }
  // approach_poses
  if (!geometry_msgs__msg__Pose__Sequence__are_equal(
      &(lhs->approach_poses), &(rhs->approach_poses)))
  {
    return false;
  }
  return true;
}

bool
gpd_ros__srv__ComputeGraspPoses_Response__copy(
  const gpd_ros__srv__ComputeGraspPoses_Response * input,
  gpd_ros__srv__ComputeGraspPoses_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // target_poses
  if (!geometry_msgs__msg__Pose__Sequence__copy(
      &(input->target_poses), &(output->target_poses)))
  {
    return false;
  }
  // approach_poses
  if (!geometry_msgs__msg__Pose__Sequence__copy(
      &(input->approach_poses), &(output->approach_poses)))
  {
    return false;
  }
  return true;
}

gpd_ros__srv__ComputeGraspPoses_Response *
gpd_ros__srv__ComputeGraspPoses_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gpd_ros__srv__ComputeGraspPoses_Response * msg = (gpd_ros__srv__ComputeGraspPoses_Response *)allocator.allocate(sizeof(gpd_ros__srv__ComputeGraspPoses_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gpd_ros__srv__ComputeGraspPoses_Response));
  bool success = gpd_ros__srv__ComputeGraspPoses_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gpd_ros__srv__ComputeGraspPoses_Response__destroy(gpd_ros__srv__ComputeGraspPoses_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gpd_ros__srv__ComputeGraspPoses_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gpd_ros__srv__ComputeGraspPoses_Response__Sequence__init(gpd_ros__srv__ComputeGraspPoses_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gpd_ros__srv__ComputeGraspPoses_Response * data = NULL;

  if (size) {
    data = (gpd_ros__srv__ComputeGraspPoses_Response *)allocator.zero_allocate(size, sizeof(gpd_ros__srv__ComputeGraspPoses_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gpd_ros__srv__ComputeGraspPoses_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gpd_ros__srv__ComputeGraspPoses_Response__fini(&data[i - 1]);
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
gpd_ros__srv__ComputeGraspPoses_Response__Sequence__fini(gpd_ros__srv__ComputeGraspPoses_Response__Sequence * array)
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
      gpd_ros__srv__ComputeGraspPoses_Response__fini(&array->data[i]);
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

gpd_ros__srv__ComputeGraspPoses_Response__Sequence *
gpd_ros__srv__ComputeGraspPoses_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gpd_ros__srv__ComputeGraspPoses_Response__Sequence * array = (gpd_ros__srv__ComputeGraspPoses_Response__Sequence *)allocator.allocate(sizeof(gpd_ros__srv__ComputeGraspPoses_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gpd_ros__srv__ComputeGraspPoses_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gpd_ros__srv__ComputeGraspPoses_Response__Sequence__destroy(gpd_ros__srv__ComputeGraspPoses_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gpd_ros__srv__ComputeGraspPoses_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gpd_ros__srv__ComputeGraspPoses_Response__Sequence__are_equal(const gpd_ros__srv__ComputeGraspPoses_Response__Sequence * lhs, const gpd_ros__srv__ComputeGraspPoses_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gpd_ros__srv__ComputeGraspPoses_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gpd_ros__srv__ComputeGraspPoses_Response__Sequence__copy(
  const gpd_ros__srv__ComputeGraspPoses_Response__Sequence * input,
  gpd_ros__srv__ComputeGraspPoses_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gpd_ros__srv__ComputeGraspPoses_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gpd_ros__srv__ComputeGraspPoses_Response * data =
      (gpd_ros__srv__ComputeGraspPoses_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gpd_ros__srv__ComputeGraspPoses_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gpd_ros__srv__ComputeGraspPoses_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gpd_ros__srv__ComputeGraspPoses_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "gpd_ros/srv/detail/compute_grasp_poses__functions.h"

bool
gpd_ros__srv__ComputeGraspPoses_Event__init(gpd_ros__srv__ComputeGraspPoses_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    gpd_ros__srv__ComputeGraspPoses_Event__fini(msg);
    return false;
  }
  // request
  if (!gpd_ros__srv__ComputeGraspPoses_Request__Sequence__init(&msg->request, 0)) {
    gpd_ros__srv__ComputeGraspPoses_Event__fini(msg);
    return false;
  }
  // response
  if (!gpd_ros__srv__ComputeGraspPoses_Response__Sequence__init(&msg->response, 0)) {
    gpd_ros__srv__ComputeGraspPoses_Event__fini(msg);
    return false;
  }
  return true;
}

void
gpd_ros__srv__ComputeGraspPoses_Event__fini(gpd_ros__srv__ComputeGraspPoses_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  gpd_ros__srv__ComputeGraspPoses_Request__Sequence__fini(&msg->request);
  // response
  gpd_ros__srv__ComputeGraspPoses_Response__Sequence__fini(&msg->response);
}

bool
gpd_ros__srv__ComputeGraspPoses_Event__are_equal(const gpd_ros__srv__ComputeGraspPoses_Event * lhs, const gpd_ros__srv__ComputeGraspPoses_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!gpd_ros__srv__ComputeGraspPoses_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!gpd_ros__srv__ComputeGraspPoses_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
gpd_ros__srv__ComputeGraspPoses_Event__copy(
  const gpd_ros__srv__ComputeGraspPoses_Event * input,
  gpd_ros__srv__ComputeGraspPoses_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!gpd_ros__srv__ComputeGraspPoses_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!gpd_ros__srv__ComputeGraspPoses_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

gpd_ros__srv__ComputeGraspPoses_Event *
gpd_ros__srv__ComputeGraspPoses_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gpd_ros__srv__ComputeGraspPoses_Event * msg = (gpd_ros__srv__ComputeGraspPoses_Event *)allocator.allocate(sizeof(gpd_ros__srv__ComputeGraspPoses_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gpd_ros__srv__ComputeGraspPoses_Event));
  bool success = gpd_ros__srv__ComputeGraspPoses_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gpd_ros__srv__ComputeGraspPoses_Event__destroy(gpd_ros__srv__ComputeGraspPoses_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gpd_ros__srv__ComputeGraspPoses_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gpd_ros__srv__ComputeGraspPoses_Event__Sequence__init(gpd_ros__srv__ComputeGraspPoses_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gpd_ros__srv__ComputeGraspPoses_Event * data = NULL;

  if (size) {
    data = (gpd_ros__srv__ComputeGraspPoses_Event *)allocator.zero_allocate(size, sizeof(gpd_ros__srv__ComputeGraspPoses_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gpd_ros__srv__ComputeGraspPoses_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gpd_ros__srv__ComputeGraspPoses_Event__fini(&data[i - 1]);
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
gpd_ros__srv__ComputeGraspPoses_Event__Sequence__fini(gpd_ros__srv__ComputeGraspPoses_Event__Sequence * array)
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
      gpd_ros__srv__ComputeGraspPoses_Event__fini(&array->data[i]);
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

gpd_ros__srv__ComputeGraspPoses_Event__Sequence *
gpd_ros__srv__ComputeGraspPoses_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gpd_ros__srv__ComputeGraspPoses_Event__Sequence * array = (gpd_ros__srv__ComputeGraspPoses_Event__Sequence *)allocator.allocate(sizeof(gpd_ros__srv__ComputeGraspPoses_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gpd_ros__srv__ComputeGraspPoses_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gpd_ros__srv__ComputeGraspPoses_Event__Sequence__destroy(gpd_ros__srv__ComputeGraspPoses_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gpd_ros__srv__ComputeGraspPoses_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gpd_ros__srv__ComputeGraspPoses_Event__Sequence__are_equal(const gpd_ros__srv__ComputeGraspPoses_Event__Sequence * lhs, const gpd_ros__srv__ComputeGraspPoses_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gpd_ros__srv__ComputeGraspPoses_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gpd_ros__srv__ComputeGraspPoses_Event__Sequence__copy(
  const gpd_ros__srv__ComputeGraspPoses_Event__Sequence * input,
  gpd_ros__srv__ComputeGraspPoses_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gpd_ros__srv__ComputeGraspPoses_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gpd_ros__srv__ComputeGraspPoses_Event * data =
      (gpd_ros__srv__ComputeGraspPoses_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gpd_ros__srv__ComputeGraspPoses_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gpd_ros__srv__ComputeGraspPoses_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gpd_ros__srv__ComputeGraspPoses_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
