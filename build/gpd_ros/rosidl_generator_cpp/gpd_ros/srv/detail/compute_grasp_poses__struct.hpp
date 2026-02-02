// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gpd_ros:srv/ComputeGraspPoses.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "gpd_ros/srv/compute_grasp_poses.hpp"


#ifndef GPD_ROS__SRV__DETAIL__COMPUTE_GRASP_POSES__STRUCT_HPP_
#define GPD_ROS__SRV__DETAIL__COMPUTE_GRASP_POSES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'grasps'
#include "gpd_ros/msg/detail/grasp_config_list__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__gpd_ros__srv__ComputeGraspPoses_Request __attribute__((deprecated))
#else
# define DEPRECATED__gpd_ros__srv__ComputeGraspPoses_Request __declspec(deprecated)
#endif

namespace gpd_ros
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ComputeGraspPoses_Request_
{
  using Type = ComputeGraspPoses_Request_<ContainerAllocator>;

  explicit ComputeGraspPoses_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : grasps(_init)
  {
    (void)_init;
  }

  explicit ComputeGraspPoses_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : grasps(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _grasps_type =
    gpd_ros::msg::GraspConfigList_<ContainerAllocator>;
  _grasps_type grasps;

  // setters for named parameter idiom
  Type & set__grasps(
    const gpd_ros::msg::GraspConfigList_<ContainerAllocator> & _arg)
  {
    this->grasps = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gpd_ros::srv::ComputeGraspPoses_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const gpd_ros::srv::ComputeGraspPoses_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gpd_ros::srv::ComputeGraspPoses_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gpd_ros::srv::ComputeGraspPoses_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gpd_ros::srv::ComputeGraspPoses_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gpd_ros::srv::ComputeGraspPoses_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gpd_ros::srv::ComputeGraspPoses_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gpd_ros::srv::ComputeGraspPoses_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gpd_ros::srv::ComputeGraspPoses_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gpd_ros::srv::ComputeGraspPoses_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gpd_ros__srv__ComputeGraspPoses_Request
    std::shared_ptr<gpd_ros::srv::ComputeGraspPoses_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gpd_ros__srv__ComputeGraspPoses_Request
    std::shared_ptr<gpd_ros::srv::ComputeGraspPoses_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputeGraspPoses_Request_ & other) const
  {
    if (this->grasps != other.grasps) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputeGraspPoses_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputeGraspPoses_Request_

// alias to use template instance with default allocator
using ComputeGraspPoses_Request =
  gpd_ros::srv::ComputeGraspPoses_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gpd_ros


// Include directives for member types
// Member 'target_poses'
// Member 'approach_poses'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__gpd_ros__srv__ComputeGraspPoses_Response __attribute__((deprecated))
#else
# define DEPRECATED__gpd_ros__srv__ComputeGraspPoses_Response __declspec(deprecated)
#endif

namespace gpd_ros
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ComputeGraspPoses_Response_
{
  using Type = ComputeGraspPoses_Response_<ContainerAllocator>;

  explicit ComputeGraspPoses_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ComputeGraspPoses_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _target_poses_type =
    std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose_<ContainerAllocator>>>;
  _target_poses_type target_poses;
  using _approach_poses_type =
    std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose_<ContainerAllocator>>>;
  _approach_poses_type approach_poses;

  // setters for named parameter idiom
  Type & set__target_poses(
    const std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose_<ContainerAllocator>>> & _arg)
  {
    this->target_poses = _arg;
    return *this;
  }
  Type & set__approach_poses(
    const std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose_<ContainerAllocator>>> & _arg)
  {
    this->approach_poses = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gpd_ros::srv::ComputeGraspPoses_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const gpd_ros::srv::ComputeGraspPoses_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gpd_ros::srv::ComputeGraspPoses_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gpd_ros::srv::ComputeGraspPoses_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gpd_ros::srv::ComputeGraspPoses_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gpd_ros::srv::ComputeGraspPoses_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gpd_ros::srv::ComputeGraspPoses_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gpd_ros::srv::ComputeGraspPoses_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gpd_ros::srv::ComputeGraspPoses_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gpd_ros::srv::ComputeGraspPoses_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gpd_ros__srv__ComputeGraspPoses_Response
    std::shared_ptr<gpd_ros::srv::ComputeGraspPoses_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gpd_ros__srv__ComputeGraspPoses_Response
    std::shared_ptr<gpd_ros::srv::ComputeGraspPoses_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputeGraspPoses_Response_ & other) const
  {
    if (this->target_poses != other.target_poses) {
      return false;
    }
    if (this->approach_poses != other.approach_poses) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputeGraspPoses_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputeGraspPoses_Response_

// alias to use template instance with default allocator
using ComputeGraspPoses_Response =
  gpd_ros::srv::ComputeGraspPoses_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gpd_ros


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__gpd_ros__srv__ComputeGraspPoses_Event __attribute__((deprecated))
#else
# define DEPRECATED__gpd_ros__srv__ComputeGraspPoses_Event __declspec(deprecated)
#endif

namespace gpd_ros
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ComputeGraspPoses_Event_
{
  using Type = ComputeGraspPoses_Event_<ContainerAllocator>;

  explicit ComputeGraspPoses_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit ComputeGraspPoses_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<gpd_ros::srv::ComputeGraspPoses_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<gpd_ros::srv::ComputeGraspPoses_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<gpd_ros::srv::ComputeGraspPoses_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<gpd_ros::srv::ComputeGraspPoses_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<gpd_ros::srv::ComputeGraspPoses_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<gpd_ros::srv::ComputeGraspPoses_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<gpd_ros::srv::ComputeGraspPoses_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<gpd_ros::srv::ComputeGraspPoses_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gpd_ros::srv::ComputeGraspPoses_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const gpd_ros::srv::ComputeGraspPoses_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gpd_ros::srv::ComputeGraspPoses_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gpd_ros::srv::ComputeGraspPoses_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gpd_ros::srv::ComputeGraspPoses_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gpd_ros::srv::ComputeGraspPoses_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gpd_ros::srv::ComputeGraspPoses_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gpd_ros::srv::ComputeGraspPoses_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gpd_ros::srv::ComputeGraspPoses_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gpd_ros::srv::ComputeGraspPoses_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gpd_ros__srv__ComputeGraspPoses_Event
    std::shared_ptr<gpd_ros::srv::ComputeGraspPoses_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gpd_ros__srv__ComputeGraspPoses_Event
    std::shared_ptr<gpd_ros::srv::ComputeGraspPoses_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputeGraspPoses_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputeGraspPoses_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputeGraspPoses_Event_

// alias to use template instance with default allocator
using ComputeGraspPoses_Event =
  gpd_ros::srv::ComputeGraspPoses_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gpd_ros

namespace gpd_ros
{

namespace srv
{

struct ComputeGraspPoses
{
  using Request = gpd_ros::srv::ComputeGraspPoses_Request;
  using Response = gpd_ros::srv::ComputeGraspPoses_Response;
  using Event = gpd_ros::srv::ComputeGraspPoses_Event;
};

}  // namespace srv

}  // namespace gpd_ros

#endif  // GPD_ROS__SRV__DETAIL__COMPUTE_GRASP_POSES__STRUCT_HPP_
