#ifndef PARAMETER
#define PARAMETER

#include <rclcpp/rclcpp.hpp>
#include <chrono>
#include <string>
#include <functional>

class ParametersClass: public rclcpp::Node
{
  public:
    ParametersClass();
    void respond();

  private:
    std::string parameter_string_;
    rclcpp::TimerBase::SharedPtr timer_;
};





#endif /* PARAMETER */
