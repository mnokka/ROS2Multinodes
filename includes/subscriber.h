#ifndef SUBSCRIBER
#define SUBSCRIBER


#include <functional>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"


class MySubscriber : public rclcpp::Node {



public:
  MySubscriber();
  void incrementer(void);
private:

  void topic_callback(const std_msgs::msg::String::ConstSharedPtr msg) const;

  rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;
  int counter=0;

};





#endif /* SUBSCRIBER */
