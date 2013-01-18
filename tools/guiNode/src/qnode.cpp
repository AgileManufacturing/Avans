/**
 * @file /src/qnode.cpp
 *
 * @brief DeltaRobotNode GUI
 * @author Eric Smekens
 * @author Thomas Cornelissen
 * @date December 2012
 **/

/*****************************************************************************
** Includes
*****************************************************************************/
#include <ros/ros.h>
#include <ros/network.h>
#include <string>
#include <std_msgs/String.h>
#include <sstream>
#include "../include/guiNode/qnode.hpp"

/*****************************************************************************
** Namespaces
*****************************************************************************/

namespace guiNode {

/*****************************************************************************
** Implementation
*****************************************************************************/

QNode::QNode(int argc, char** argv ) :
	init_argc(argc),
	init_argv(argv)
	{}

QNode::~QNode() {
    if(ros::isStarted()) {
      ros::shutdown(); // explicitly needed since we use ros::start();
      ros::waitForShutdown();
    }
	wait();
}
void QNode::chatterCallback(const rosgraph_msgs::Log::ConstPtr& msg)//(const std_msgs::String::ConstPtr& msg)
{
	std::stringstream ss;
	switch (msg->level)
	{
		case rosgraph_msgs::Log::FATAL:
			ss << "FATAL ";
			break;
		case rosgraph_msgs::Log::ERROR:
			ss << "ERROR ";
			break;
		case rosgraph_msgs::Log::WARN:
			ss << "WARN ";
			break;
		case rosgraph_msgs::Log::DEBUG:
			ss << "DEBUG ";
			break;
		case rosgraph_msgs::Log::INFO:
			ss << "INFO ";
			break;
		default:
			ss << msg->level << " ";
			break;
	}
	ss << msg->msg;
	log(Info, ss.str());
}
bool QNode::init() {
	ros::init(init_argc,init_argv,"guiNode");
	if ( ! ros::master::check() ) {
		return false;
	}
	ros::start(); //explicitly needed since our nodehandle is going out of scope.
	ros::NodeHandle n;

	logSub = n.subscribe("/rosout_agg", 1000 , &QNode::chatterCallback, this); //Subscribe to the rosout_agg topic!

	moveToRelativePointClient = n.serviceClient<deltaRobotNode::MoveToRelativePoint>(DeltaRobotNodeServices::MOVE_TO_RELATIVE_POINT);
	moveToPointClient = n.serviceClient<deltaRobotNode::MoveToPoint>(DeltaRobotNodeServices::MOVE_TO_POINT);
	calibrateClient = n.serviceClient<deltaRobotNode::Calibrate>(DeltaRobotNodeServices::CALIBRATE);
	defineTCPClient = n.serviceClient<deltaRobotNode::DefineTCP>(DeltaRobotNodeServices::DEFINETCP);

	//End communication
	start();
	return true;
}

void QNode::run() {
	ros::Rate loop_rate(1);
	int count = 0;
	std::cout << "Node started" << std::endl;
	while ( ros::ok() )
	{
		ros::spinOnce();
		loop_rate.sleep();
		++count;
	}
	std::cout << "Ros shutdown, proceeding to close the gui." << std::endl;
	emit rosShutdown(); // used to signal the gui for a shutdown (useful to roslaunch)
}

bool QNode::moveRelative(int x, int y, int z)
{
	log(Info, std::string("Tried to move relative!"));
	moveToRelativePointService.request.motion.x = x;
	moveToRelativePointService.request.motion.y = y;
	moveToRelativePointService.request.motion.z = z;
	moveToRelativePointService.request.motion.speed = 100.0;

	ROS_INFO("Try to move relative");
	moveToRelativePointClient.call(moveToRelativePointService);
	ros::spinOnce();
	return moveToRelativePointService.response.succeeded;
}
bool QNode::moveAbsolute(int x, int y, int z)
{
	log(Info, std::string("Tried to move absolute!"));
	moveToPointService.request.motion.x = x;
	moveToPointService.request.motion.y = y;
	moveToPointService.request.motion.z = -196.063 + z;
	moveToPointService.request.motion.speed = 100.0;

	ROS_INFO("Try to move absolute");
	moveToPointClient.call(moveToPointService);
	ros::spinOnce();
	return moveToPointService.response.succeeded;
}
void QNode::calibrate()
{
	log(Info, std::string("Tried to start calibrating!"));
	calibrateClient.call(calibrateService);
}
void QNode::emergencyStop()
{
	//Call service here!
	ROS_INFO("Not implemented, as Services can't be interrupted!");
}

void QNode::sendTCP(int x, int y, int z)
{
	log(Info, std::string("Tried to set TCP!"));
	defineTCPService.request.tcpoffset.x = -x;
	defineTCPService.request.tcpoffset.y = -y;
	defineTCPService.request.tcpoffset.z = -z;// -196.063 + z;

	ROS_INFO("Try to define TCP");
	defineTCPClient.call(defineTCPService);
}

void QNode::log( const LogLevel &level, const std::string &msg)
{
	logging_model.insertRows(logging_model.rowCount(),1);
	std::stringstream logging_model_msg;
	switch ( level ) {
		case(Debug) : {
				logging_model_msg << "[DEBUG] [" << ros::Time::now() << "]: " << msg;
				break;
		}
		case(Info) : {
				logging_model_msg << "[INFO] [" << ros::Time::now() << "]: " << msg;
				break;
		}
		case(Warn) : {
				logging_model_msg << "[INFO] [" << ros::Time::now() << "]: " << msg;
				break;
		}
		case(Error) : {
				logging_model_msg << "[ERROR] [" << ros::Time::now() << "]: " << msg;
				break;
		}
		case(Fatal) : {
				logging_model_msg << "[FATAL] [" << ros::Time::now() << "]: " << msg;
				break;
		}
	}
	QVariant new_row(QString(logging_model_msg.str().c_str()));
	logging_model.setData(logging_model.index(logging_model.rowCount()-1),new_row);
	emit loggingUpdated(); // used to readjust the scrollbar
}

}  // namespace guiNode
