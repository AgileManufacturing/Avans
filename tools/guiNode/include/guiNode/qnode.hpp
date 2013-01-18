/**
 * @file /include/guiNode/qnode.hpp
 * @brief DeltaRobotNode GUI
 * @author Eric Smekens
 * @author Thomas Cornelissen
 * @date December 2012
 **/
/*****************************************************************************
** Ifdefs
*****************************************************************************/

#ifndef guiNode_QNODE_HPP_
#define guiNode_QNODE_HPP_

/*****************************************************************************
** Includes
*****************************************************************************/

#include <ros/ros.h>
#include <string>
#include <QThread>
#include <QStringListModel>

#include <rosgraph_msgs/Log.h>

#include "deltaRobotNode/MovePath.h"
#include "deltaRobotNode/MoveRelativePath.h"
#include "deltaRobotNode/MoveToRelativePoint.h"
#include "deltaRobotNode/MoveToPoint.h"
#include "deltaRobotNode/Motion.h"
#include "deltaRobotNode/Calibrate.h"
#include "deltaRobotNode/DefineTCP.h"
#include "deltaRobotNode/TCPOffset.h"
#include "DeltaRobotNode/Services.h"
/*****************************************************************************
** Namespaces
*****************************************************************************/

namespace guiNode {

/*****************************************************************************
** Class
*****************************************************************************/

class QNode : public QThread {
    Q_OBJECT
public:
	QNode(int argc, char** argv );
	virtual ~QNode();
	bool init();
	void run();

	/*********************
	** Logging
	**********************/
	enum LogLevel {
	         Debug,
	         Info,
	         Warn,
	         Error,
	         Fatal
	 };

	QStringListModel* loggingModel() { return &logging_model; }
	bool moveRelative(int, int, int);
	bool moveAbsolute(int, int, int);
	void calibrate(void);
	void emergencyStop(void);
	void sendTCP(int, int, int);
	void log( const LogLevel &level, const std::string &msg);
	void chatterCallback(const rosgraph_msgs::Log::ConstPtr& msg);

signals:
	void loggingUpdated();
    void rosShutdown();

private:
	int init_argc;
	char** init_argv;

	//Logging model used to print in the logging tab!
    QStringListModel logging_model;

	ros::ServiceClient calibrateClient;
	deltaRobotNode::Calibrate calibrateService;

    ros::ServiceClient moveToRelativePointClient;
    deltaRobotNode::MoveToRelativePoint moveToRelativePointService;

	ros::ServiceClient moveToPointClient;
	deltaRobotNode::MoveToPoint moveToPointService;

	ros::ServiceClient defineTCPClient;
	deltaRobotNode::DefineTCP defineTCPService;

	ros::Subscriber logSub; //Subscriber for logging.
};

}  // namespace guiNode

#endif /* guiNode_QNODE_HPP_ */
