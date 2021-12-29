#ifndef ROS2_MULTI_NODE_SUBSCRIBER_H
#define ROS2_MULTI_NODE_SUBSCRIBER_H


#include <functional>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

#include <string.h>


namespace multinode
{
class MySubscriber : public rclcpp::Node {
public:
  MySubscriber(const rclcpp::NodeOptions & options);

private:

  void topic_callback(const std_msgs::msg::String::ConstSharedPtr msg) const;

  void incrementer();
  rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;
  int counter_=0;
  std::string counterstring="kissa";

};


}

#endif /* SUBSCRIBER */
