
[![License](https://img.shields.io/badge/License-BSD%203--Clause-blue.svg)](https://opensource.org/licenses/BSD-3-Clause)
[![Build Status](https://app.travis-ci.com/aswathselvam/swarm_robots.svg?branch=main)](https://app.travis-ci.com/aswathselvam/swarm_robots)
[![Coverage Status](https://coveralls.io/repos/github/aswathselvam/swarm_robots/badge.svg?branch=main)](https://coveralls.io/github/aswathselvam/swarm_robots?branch=main)

# Jackal Rescue Robot - Implentation using turtlebot

This branch is a turtle bot version of the main project

## UML

### Activity diagram
<img src="https://github.com/kavyadevd/swarm_robots/blob/test/UML/ActivityDiagram.png?raw=true" alt="Activity Diagram" width="500px"></img>

### Class diagram
<img src="https://github.com/kavyadevd/swarm_robots/blob/test/UML/Class%20diagram.png?raw=true" width="500px" alt="Class Diagram"></img>



### Assumptions:
1. Robots are not aware of its neighbours.
2. Centralized communication, there is a common node(rosmaster) through which all robots communicates with each other. 
3. Swarms only operate in 2D plane.

### Tested on:
1. Ubuntu 20.04 and Ubuntu 18.04
2. OMPL library version: 1.5.2 

### Development process
The project will be developed using industry-grade agile methodologies. The agile method being adaptive in nature will quickly adapt to software requirements and changes due to challenges faced if any during the project development cycle. For software development, pair programming strategies will be used which will ensure a robust, bug-free package. We have hierarchical test suites, which will test the submodules by implementing unit test cases and the validity of the whole system. To simulate real-world challenges we plan to use different Gmock test cases and confirm the correctness of the system.

[Meeting notes](https://docs.google.com/document/d/1nNpMe6DLzv8XDJHyTaXOK77MExHqAslBlWCvYTAc9Zk/edit?usp=sharing)

[AIP Spreadsheet](https://docs.google.com/spreadsheets/d/1eQ78AiMMgUXJpQEjbjUjjJoJ0I1oSbPfRSU09nT6VKE/edit?usp=sharing)

### Installations

It is assumed that the system has Ubuntu 18.04 and above with ROS Melodic/Noetic installed.
If not, install Ubuntu from [here](https://ubuntu.com/download/desktop) and ROS from [here](http://wiki.ros.org/melodic/Installation/Ubuntu)


#### Install dependencies
##### OMPL
```bash
sudo sh -c 'echo "deb http://packages.ros.org/ros/ubuntu `lsb_release -sc` main" > /etc/apt/sources.list.d/ros-latest.list'
wget http://packages.ros.org/ros.key -O - | sudo apt-key add -

sudo apt-get update
sudo apt-get install ros-`rosversion -d`-ompl
```

##### octomap_mapping
```bash
sudo apt-get install ros-<ros-version>-octomap ros-<ros-version>-octomap-mapping
rosdep install octomap_mapping
rosmake octomap_mapping

```

#### Clone git repository
```bash
cd swarm_robots/src
git clone --recursive https://github.com/kavyadevd/swarm_robots.git
```

#### Execute program
```bash
catkin_make
roslaunch swarm_robots main.launch
```

### Running ROS test/ Gtest

To make the test files execute the following commands successively
```bash
catkin_make tests
catkin_make test
```

Output will be similiar to :

```bash
... logging to /home/kavya/.ros/log/rostest-Matrix-27255.log
[ROSUNIT] Outputting test results to /home/kavya/.ros/test_results/swarm_robots
/rostest-test_testswarm.xml
[ WARN] [1636828912.923804367]: Publisher message will be changed.
[Testcase: testtestswarm] ... ok

[ROSTEST]-----------------------------------------------------------------------

[swarm_robots.rosunit-testswarm/TestArentsInit][passed]
[swarm_robots.rosunit-testswarm/TestSwarmSize][passed]

SUMMARY
 * RESULT: SUCCESS
 * TESTS: 2
 * ERRORS: 0
 * FAILURES: 0

rostest log file is in /home/kavya/.ros/log/rostest-Matrix-27255.log

```

## Licensing
The project is licensed under the [3-Clause BSD License](https://opensource.org/licenses/BSD-3-Clause). Click [here](https://github.com/kavyadevd/swarm_robots/blob/main/LICENSE) to know more

