// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gpd_ros:srv/ComputeGraspPoses.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "gpd_ros/srv/compute_grasp_poses.hpp"


#ifndef GPD_ROS__SRV__DETAIL__COMPUTE_GRASP_POSES__BUILDER_HPP_
#define GPD_ROS__SRV__DETAIL__COMPUTE_GRASP_POSES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gpd_ros/srv/detail/compute_grasp_poses__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gpd_ros
{

namespace srv
{

namespace builder
{

class Init_ComputeGraspPoses_Request_grasps
{
public:
  Init_ComputeGraspPoses_Request_grasps()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gpd_ros::srv::ComputeGraspPoses_Request grasps(::gpd_ros::srv::ComputeGraspPoses_Request::_grasps_type arg)
  {
    msg_.grasps = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gpd_ros::srv::ComputeGraspPoses_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gpd_ros::srv::ComputeGraspPoses_Request>()
{
  return gpd_ros::srv::builder::Init_ComputeGraspPoses_Request_grasps();
}

}  // namespace gpd_ros


namespace gpd_ros
{

namespace srv
{

namespace builder
{

class Init_ComputeGraspPoses_Response_approach_poses
{
public:
  explicit Init_ComputeGraspPoses_Response_approach_poses(::gpd_ros::srv::ComputeGraspPoses_Response & msg)
  : msg_(msg)
  {}
  ::gpd_ros::srv::ComputeGraspPoses_Response approach_poses(::gpd_ros::srv::ComputeGraspPoses_Response::_approach_poses_type arg)
  {
    msg_.approach_poses = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gpd_ros::srv::ComputeGraspPoses_Response msg_;
};

class Init_ComputeGraspPoses_Response_target_poses
{
public:
  Init_ComputeGraspPoses_Response_target_poses()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputeGraspPoses_Response_approach_poses target_poses(::gpd_ros::srv::ComputeGraspPoses_Response::_target_poses_type arg)
  {
    msg_.target_poses = std::move(arg);
    return Init_ComputeGraspPoses_Response_approach_poses(msg_);
  }

private:
  ::gpd_ros::srv::ComputeGraspPoses_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gpd_ros::srv::ComputeGraspPoses_Response>()
{
  return gpd_ros::srv::builder::Init_ComputeGraspPoses_Response_target_poses();
}

}  // namespace gpd_ros


namespace gpd_ros
{

namespace srv
{

namespace builder
{

class Init_ComputeGraspPoses_Event_response
{
public:
  explicit Init_ComputeGraspPoses_Event_response(::gpd_ros::srv::ComputeGraspPoses_Event & msg)
  : msg_(msg)
  {}
  ::gpd_ros::srv::ComputeGraspPoses_Event response(::gpd_ros::srv::ComputeGraspPoses_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gpd_ros::srv::ComputeGraspPoses_Event msg_;
};

class Init_ComputeGraspPoses_Event_request
{
public:
  explicit Init_ComputeGraspPoses_Event_request(::gpd_ros::srv::ComputeGraspPoses_Event & msg)
  : msg_(msg)
  {}
  Init_ComputeGraspPoses_Event_response request(::gpd_ros::srv::ComputeGraspPoses_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ComputeGraspPoses_Event_response(msg_);
  }

private:
  ::gpd_ros::srv::ComputeGraspPoses_Event msg_;
};

class Init_ComputeGraspPoses_Event_info
{
public:
  Init_ComputeGraspPoses_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputeGraspPoses_Event_request info(::gpd_ros::srv::ComputeGraspPoses_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ComputeGraspPoses_Event_request(msg_);
  }

private:
  ::gpd_ros::srv::ComputeGraspPoses_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gpd_ros::srv::ComputeGraspPoses_Event>()
{
  return gpd_ros::srv::builder::Init_ComputeGraspPoses_Event_info();
}

}  // namespace gpd_ros

#endif  // GPD_ROS__SRV__DETAIL__COMPUTE_GRASP_POSES__BUILDER_HPP_
