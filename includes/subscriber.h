#ifndef SUBSCRIBER
#define SUBSCRIBER


class MySubscriber : public rclcpp::Node {



public:
  MySubscriber();
private:

  //void topic_callback(const std_msgs::msg::String::ConstSharedPtr msg) const;

  rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;
};


#endif /* SUBSCRIBER */
