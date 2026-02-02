// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gpd_ros:msg/CloudSamples.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "gpd_ros/msg/cloud_samples.hpp"


#ifndef GPD_ROS__MSG__DETAIL__CLOUD_SAMPLES__BUILDER_HPP_
#define GPD_ROS__MSG__DETAIL__CLOUD_SAMPLES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gpd_ros/msg/detail/cloud_samples__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gpd_ros
{

namespace msg
{

namespace builder
{

class Init_CloudSamples_samples
{
public:
  explicit Init_CloudSamples_samples(::gpd_ros::msg::CloudSamples & msg)
  : msg_(msg)
  {}
  ::gpd_ros::msg::CloudSamples samples(::gpd_ros::msg::CloudSamples::_samples_type arg)
  {
    msg_.samples = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gpd_ros::msg::CloudSamples msg_;
};

class Init_CloudSamples_cloud_sources
{
public:
  Init_CloudSamples_cloud_sources()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CloudSamples_samples cloud_sources(::gpd_ros::msg::CloudSamples::_cloud_sources_type arg)
  {
    msg_.cloud_sources = std::move(arg);
    return Init_CloudSamples_samples(msg_);
  }

private:
  ::gpd_ros::msg::CloudSamples msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gpd_ros::msg::CloudSamples>()
{
  return gpd_ros::msg::builder::Init_CloudSamples_cloud_sources();
}

}  // namespace gpd_ros

#endif  // GPD_ROS__MSG__DETAIL__CLOUD_SAMPLES__BUILDER_HPP_
