/**
 * @file state.cpp
 * @author Kavyashree Devadiga (kavya@umd.edu), Aswath Muthuselvam
 * (aswath@umd.edu)
 * @brief The header file for defining robot state variables and methods
 * @version 0.2
 * @date 2021-12-11
 * @copyright BSD3 Copyright (c) 2021
 *
 */
#include "../include/swarm_robots/state.h"

#include <iostream>
#include <string>

#include "geometry_msgs/Pose.h"
#include "ros/ros.h"
#include "std_msgs/String.h"
#include "tf/transform_broadcaster.h"

State::State() {
    this->x_ = 0;
    this->y_ = 0;
    this->yaw_ = 0;
}

State::State(double x, double y) {
    this->x_ = x;
    this->y_ = y;
    this->yaw_ = 0;
}

State::State(double x, double y, double yaw) {
    this->x_ = x;
    this->y_ = y;
    this->yaw_ = yaw;
}

bool State::SetPublisher(ros::NodeHandle nh, std::string topic) {
    state_pub = nh.advertise<geometry_msgs::Twist>(topic, 1);
    return true;
}

bool State::Publish(geometry_msgs::Twist robot_vel) {
    state_pub.publish(robot_vel);
    return true;
}
