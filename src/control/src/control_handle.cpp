#include <ros/ros.h>
#include "control_handle.hpp"
#include "register.h"
#include <chrono>

namespace ns_control {

// Constructor
ControlHandle::ControlHandle(ros::NodeHandle &nodeHandle) :
    nodeHandle_(nodeHandle),
    control_(nodeHandle) {
  ROS_INFO("Constructing Handle");
  loadParameters();
  control_.setPidParameters(pid_para_);
  control_.setPurePursuitParameters(pp_para_);
  control_.setControlParameters(control_para_);
  // control_mode_ = control_para_.longitudinal_mode; 
  // 1: constant speed 2: planned sped, 3: desired distance
  subscribeToTopics();
  publishToTopics();
}

// Getters
int ControlHandle::getNodeRate() const { return node_rate_; }

// Methods
void ControlHandle::loadParameters() {
  ROS_INFO("loading handle parameters");
  if(!nodeHandle_.param<std::string>("stop_flag_topic_name",
                                    stop_flag_topic_name_,
                                    "/stop_flag")){
    ROS_WARN_STREAM(
        "Did not load stop_flag_topic_name. Standard value is: " << stop_flag_topic_name_);
                                    }
  if (!nodeHandle_.param<std::string>("final_waypoints_topic_name",
                                      final_waypoints_topic_name_,
                                      "/planning/final_waypoints")) {
    ROS_WARN_STREAM(
        "Did not load final_waypoints_topic_name. Standard value is: " << final_waypoints_topic_name_);
  }
  if (!nodeHandle_.param<std::string>("ego_state_topic_name",
                                      ego_state_topic_name_,
                                      "/carla/ego_state")) {
    ROS_WARN_STREAM(
        "Did not load ego_state_topic_name. Standard value is: " << ego_state_topic_name_);
  }
  if (!nodeHandle_.param<std::string>("control_command_topic_name",
                                      control_command_topic_name_,
                                      "/plauto/control")) {
    ROS_WARN_STREAM("Did not load control_command_topic_name. Standard value is: " << control_command_topic_name_);
  }
  if (!nodeHandle_.param<std::string>("platoon_state_topic_name",
                                      platoon_state_topic_name_,
                                      "/carla/scenario_generation/platoon_state")) {
    ROS_WARN_STREAM("Did not load platoon_state_topic_name. Standard value is: " << platoon_state_topic_name_);
  }
  if (!nodeHandle_.param<std::string>("localization_utm_topic_name",
                                      localization_utm_topic_name_,
                                      "/localization/utmpose")) {
    ROS_WARN_STREAM("Did not load localization_utm_topic_name. Standard value is: " << localization_utm_topic_name_);
  }
  if (!nodeHandle_.param<std::string>("lookahead_point_topic_name",
                                        lookahead_point_topic_name_,
                                      "/control/lookahead_point")) {
    ROS_WARN_STREAM("Did not load lookahead_point_topic_name. Standard value is: " << localization_utm_topic_name_);
  }

  if (!nodeHandle_.param("node_rate", node_rate_, 1)) {
    ROS_WARN_STREAM("Did not load node_rate. Standard value is: " << node_rate_);
  }
  // Control Parameters 
  nodeHandle_.param<bool>("control_switch/longitudinal",control_para_.longitudinal_control_switch,false);
  nodeHandle_.param<bool>("control_switch/lateral",control_para_.lateral_control_switch,false);
  nodeHandle_.param<int>("longitudinal_mode",control_para_.longitudinal_mode,1);
  nodeHandle_.param<double>("desired_speed",control_para_.desired_speed,5.0);
  nodeHandle_.param<double>("desired_distance",control_para_.desired_distance,5.0);
  ROS_INFO_STREAM("Longitudinal control enable: "<<control_para_.longitudinal_control_switch
                  << "; Lateral control enable: "<<control_para_.lateral_control_switch);
              
  // PID parameters
  nodeHandle_.param<double>("pid/kp", pid_para_.kp, 1.0);
  nodeHandle_.param<double>("pid/kd", pid_para_.kd, 0.0);
  nodeHandle_.param<double>("pid/ki", pid_para_.ki, 0.0);
  ROS_INFO_STREAM("kp: " << pid_para_.kp << ", ki: " << pid_para_.ki << ", kd: " << pid_para_.kd);

  // Pure pursuit parameters
  nodeHandle_.param<std::string>("pure_pursuit/mode", pp_para_.mode, "fixed");
  nodeHandle_.param<double>("pure_pursuit/lookahead_distance", pp_para_.lookahead_distance, 8.0);
  nodeHandle_.param<double>("pure_pursuit/k_pre", pp_para_.k_pre, 1.5); 

}

void ControlHandle::subscribeToTopics() {
  ROS_INFO("subscribe to topics");
  stopFlagSubscriber_ = 
      nodeHandle_.subscribe(stop_flag_topic_name_, 10, &ControlHandle::stopFlagCallback, this);
  finalWaypointsSubscriber_ =
      nodeHandle_.subscribe(final_waypoints_topic_name_, 10, &ControlHandle::finalWaypointsCallback, this);
  egoStateSubscriber_ =
      nodeHandle_.subscribe(ego_state_topic_name_, 10, &ControlHandle::egoStateCallback, this);
  utmPoseSubscriber_ = 
      nodeHandle_.subscribe(localization_utm_topic_name_, 10, & ControlHandle::utmPoseCallback, this);
  platoonStateSubscriber_ = 
      nodeHandle_.subscribe(platoon_state_topic_name_, 10, & ControlHandle::platoonStateCallback,this);
}

void ControlHandle::publishToTopics() {
  ROS_INFO("publish to topics");
  lookaheadpointPublisher_ = nodeHandle_.advertise<geometry_msgs::PointStamped>(lookahead_point_topic_name_, 1);
  controlCommandPublisher_ = nodeHandle_.advertise<common_msgs::ControlCommand>(control_command_topic_name_, 1);
}  

void ControlHandle::run() {
  control_.runAlgorithm();
  sendMsg();
}

void ControlHandle::sendMsg() {
  lookaheadpointPublisher_.publish(control_.getLookaheadPoint());
  common_msgs::ControlCommand control_command = control_.getControlCommand();
  if (stop_flag_ == 1) {
    control_command.accel = -1;
  }
  controlCommandPublisher_.publish(control_command);
}

// Callbacks
void ControlHandle::stopFlagCallback(const common_msgs::StopDecision &msg){
  stop_flag_ = msg.veh_stop_flag;
}

void ControlHandle::finalWaypointsCallback(const autoware_msgs::Lane &msg) {
  control_.setFinalWaypoints(msg);
  control_.finalWaypointsFlag = true;
}

void ControlHandle::egoStateCallback(const common_msgs::VehicleState &msg){
  control_.setEgoState(msg);
  control_.egoStateFlag = true;
}
void ControlHandle::platoonStateCallback(const common_msgs::PlatoonState &msg){
  control_.setPlatoonState(msg);
  control_.v2vInfoFlag = true;
}
void ControlHandle::utmPoseCallback(const nav_msgs::Odometry &msg){
  control_.setUtmPose(msg);
  control_.utmPoseFlag = true;
}

}