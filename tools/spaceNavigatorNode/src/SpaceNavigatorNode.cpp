/**
 * @file SpaceNavigatorNode.cpp
 * @brief Control the robot with a space navigator.
 * @date Created: 2012-11-05
 *
 * @author Eric Smekens
 * @author Thomas Cornelissen
 *
 * @section LICENSE
 * License: newBSD
 * 
 * Copyright © 2012, Avans Hogeschool Breda.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:
 * - Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
 * - Neither the name of the HU University of Applied Sciences Utrecht nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE HU UNIVERSITY OF APPLIED SCIENCES UTRECHT
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
 * GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 **/

#include <iostream>
#include <termios.h>
#include <stdio.h>
#include <signal.h>
#include <string.h>
#include <cstdlib>
#include "ros/ros.h"
#include "deltaRobotNode/MovePath.h"
#include "deltaRobotNode/MoveToRelativePoint.h"
#include "deltaRobotNode/Motion.h"
#include "deltaRobotNode/Calibrate.h"
#include "DeltaRobotNode/Services.h"


// @cond HIDE_NODE_NAME_FROM_DOXYGEN
#define NODE_NAME "SpaceNavigatorNode"
// @endcond

namespace SpaceNavigatorNodeNamespace {
	/**
	 * @var double speed
	 * The speed of the effector in millimeters per second.
	 **/
	double speed = 100.0;

	/**
	 * @var double step
	 * The size in millimeters per movement.
	 **/
	double step = 1.0;

	/**
	 * A terminal interface data struct.
	 **/
	struct termios oldTerminalSettings, newTerminalSettings;

	/**
	 * Release keyboard safely when Ctrl+C is pressed.
	 *
	 * @param sig The signal received from the Linux OS.
	 **/
	void quit(int sig){
	    //tcsetattr(keyboardNumber, TCSANOW, &oldTerminalSettings);
	 	exit(0);
	}
}

using namespace SpaceNavigatorNodeNamespace;

/**
 * Starting method for the SpaceNavigatorNode.
 *
 * @param argc Argument count.
 * @param argv Argument vector.
 * 
 * @return 1 on keyboard read error.
 **/
int main(int argc, char** argv){
	// Ros init.
	ros::init(argc, argv, NODE_NAME);
	ros::NodeHandle nodeHandle;

	// Getting MovePath Services.
	ros::ServiceClient deltaRobotClient = nodeHandle.serviceClient<deltaRobotNode::MoveToRelativePoint>(DeltaRobotNodeServices::MOVE_TO_RELATIVE_POINT);
	deltaRobotNode::MoveToRelativePoint moveToRelativePointService;

	// Getting Calibrate Services.
	ros::ServiceClient calibrateClient = nodeHandle.serviceClient<deltaRobotNode::Calibrate>(DeltaRobotNodeServices::CALIBRATE);
	deltaRobotNode::Calibrate calibrateService;

	// Initing the keyboard read and setting up clean shutdown.
	//signal(SIGINT, quit);
	//char inputCharacter;
	//tcgetattr(keyboardNumber, &oldTerminalSettings);
	//memcpy(&newTerminalSettings, &oldTerminalSettings, sizeof(struct termios));
	//newTerminalSettings.c_lflag &=~ (ICANON | ECHO);

	// Setting a new line, then end of file.
	//newTerminalSettings.c_cc[VEOL] = 1;
	//newTerminalSettings.c_cc[VEOF] = 2;
	//tcsetattr(keyboardNumber, TCSANOW, &newTerminalSettings);

	//ROS_INFO("Reading from keyboard");
	//ROS_INFO("Start controlling the robot by pressing WASD keys and Up and Down keys");

	deltaRobotNode::Motion motion;
	for(;;) {
		// Get the next event from the keyboard.
//		if(read(keyboardNumber, &inputCharacter, 1) < 0){
//		  perror("read():");
//		  exit(1);
//		}

		moveToRelativePointService.request.motion.x = 0;
		moveToRelativePointService.request.motion.y = 0;
		moveToRelativePointService.request.motion.z = 0;
		moveToRelativePointService.request.motion.speed = speed;

		// Check which key was pressed.
//		switch(inputCharacter){
//			case KEYCODE_UP:
//				ROS_INFO("PRESSED UP");
//				moveToRelativePointService.request.motion.z = step;
//				deltaRobotClient.call(moveToRelativePointService);
//				break;
//			case KEYCODE_DOWN:
//				ROS_INFO("PRESSED DOWN");
//				moveToRelativePointService.request.motion.z = -step;
//				deltaRobotClient.call(moveToRelativePointService);
//				break;
//			case KEYCODE_W:
//				ROS_INFO("PRESSED W");
//				moveToRelativePointService.request.motion.y = step;
//				deltaRobotClient.call(moveToRelativePointService);
//				break;
//			case KEYCODE_A:
//			  	ROS_INFO("PRESSED A");
//				moveToRelativePointService.request.motion.x = -step;
//				deltaRobotClient.call(moveToRelativePointService);
//			  	break;
//			case KEYCODE_S:
//				ROS_INFO("PRESSED S");
//				moveToRelativePointService.request.motion.y = -step;
//				deltaRobotClient.call(moveToRelativePointService);
//			  	break;
//			case KEYCODE_D:
//			  	ROS_INFO("PRESSED D");
//			  	moveToRelativePointService.request.motion.x = step;
//				deltaRobotClient.call(moveToRelativePointService);
//				break;
//			case KEYCODE_C:
//				calibrateClient.call(calibrateService);
//				break;
//		}
		ros::spinOnce();
	}
	return 0;
}
