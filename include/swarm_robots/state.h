/**
 * @file state.h
 * @author Kavyashree Devadiga (kavya@umd.edu), Aswath Muthuselvam
 * (aswath@umd.edu)
 * @brief The header file for state of agents
 * @version 0.1
 * @date 2021-12-05
 * @copyright BSD3 Copyright (c) 2021
 *
 */

#ifndef INCLUDE_SWARM_ROBOTS_STATE_H_
#define INCLUDE_SWARM_ROBOTS_STATE_H_

#include <iostream>
#include <string>

#include "geometry_msgs/Pose.h"
#include "ros/ros.h"
#include "std_msgs/String.h"
#include "tf/transform_broadcaster.h"

class State {
   public:
    State();
    State(double x, double y);
    State(double x, double y, double yaw);
    double x_;
    double y_;
    double yaw_;
    ros::Publisher state_pub;
    bool SetPublisher(ros::NodeHandle nh, std::string topic);
    bool Publish(geometry_msgs::Twist);
};

#endif  // INCLUDE_SWARM_ROBOTS_STATE_H_
