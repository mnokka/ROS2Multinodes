/*
 * adder_server.h
 *
 *  Created on: Jan 7, 2022
 *      Author: mika
 */

#ifndef INCLUDE_MULTINODE_ADDER_SERVER_H_
#define INCLUDE_MULTINODE_ADDER_SERVER_H_


#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/srv/add_two_ints.hpp"

#include <memory>


void add (const std::shared_ptr<example_interfaces::srv::AddTwoInts::Request> ,
          std::shared_ptr<example_interfaces::srv::AddTwoInts::Response>  );

#endif /* INCLUDE_MULTINODE_ADDER_SERVER_H_ */
