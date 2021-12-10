/**
 * @file inverse_kinematics.h
 * @author Kavyashree Devadiga (kavya@umd.edu), Aswath Muthuselvam
 * (aswath@umd.edu)
 * @brief The header file for agent FK
 * @version 0.1
 * @date 2021-12-05
 * @copyright BSD3 Copyright (c) 2021
 *
 */


#ifndef INCLUDE_SWARM_ROBOTS_INVERSE_KINEMATICS_H_        //  NOLINT
#define INCLUDE_SWARM_ROBOTS_INVERSE_KINEMATICS_H_

#include <ros/ros.h>
#include <std_msgs/String.h>
#include <geometry_msgs/Twist.h>
#include <string>
#include "swarm_robots/state.h"        //  NOLINT
#include "swarm_robots/safety_check.h"        //  NOLINT

using std::string;

class InverseKinematics {
    public:        //  NOLINT
        InverseKinematics(string ns, ros::NodeHandle* nh);
        State PerformIK(State start, State goal);
        State PerformModelIK();
        State CheckSafety();

    
    private:        //  NOLINT
        State goal_location_;
        State current_location_;
        State velocity_;
        SafetyCheck *safety_check_;
        
};
#endif  // INCLUDE_SWARM_ROBOTS_INVERSE_KINEMATICS_H_        //  NOLINT
