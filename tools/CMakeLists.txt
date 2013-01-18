## Add all ROS packages here ##
set(TOOLSPACKS keyboardControlNode deltaRobotTest spaceNavigatorNode guiNode)

### Don't change anything below, the part below checks if ROS is installed and configured correctly. 
######
rexos_check_ros()
if(ROS_OK)		
	add_subdirectories("${TOOLSPACKS}") # Add all ROS packages
else(ROS_OK)
	message("ROS packages cannot be build")
endif(ROS_OK)

# mcRegisterSave # 
if(${MODBUS_FOUND})
	rexos_add_executable(mcRegisterSave)
	include_directories(${MODBUS_INCLUDE_DIRS} ${LIB_MOTOR_INCLUDE} ${LIB_MODBUS_CONTROLLER_INCLUDE})
	target_link_libraries(mcRegisterSave ${MODBUS_LIBRARIES} modbusController motor)
else(${MODBUS_FOUND})
	rexos_cannot_build(mcRegisterSave "tools/mcRegisterSave")
endif(${MODBUS_FOUND})
