##############################################################################
# Rosbuild2
##############################################################################

#if(ROSBUILD)
#  include(rosbuild.cmake OPTIONAL)
#  return()
#endif()

##############################################################################
# CMake
##############################################################################

cmake_minimum_required(VERSION 2.4.6)

##############################################################################
# Ros Initialisation
##############################################################################

include($ENV{ROS_ROOT}/core/rosbuild/rosbuild.cmake)
#rosbuild_init()

# Initialize ROS package to be in our build system.
rexos_rospack_init("guiNode" false false)

#set the default path for built executables to the "bin" directory
#set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
#set the default path for built libraries to the "lib" directory
#set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

# Add executables as documented by ROS
rosbuild_add_executable(guiNode src/main.cpp)

# Set the build type.  Options are:
#  Coverage       : w/ debug symbols, w/o optimization, w/ code-coverage
#  Debug          : w/ debug symbols, w/o optimization
#  Release        : w/o debug symbols, w/ optimization
#  RelWithDebInfo : w/ debug symbols, w/ optimization
#  MinSizeRel     : w/o debug symbols, w/ optimization, stripped binaries
#set(ROS_BUILD_TYPE Debug)

##############################################################################
# Qt Environment
##############################################################################

rosbuild_include(qt_build qt-ros)
rosbuild_prepare_qt4(QtCore QtGui) # Add the appropriate components to the component list here

##############################################################################
# Sections
##############################################################################

file(GLOB QT_FORMS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} ui/*.ui)
file(GLOB QT_RESOURCES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} resources/*.qrc)
file(GLOB_RECURSE QT_MOC RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} FOLLOW_SYMLINKS include/guiNode/*.hpp)

QT4_ADD_RESOURCES(QT_RESOURCES_CPP ${QT_RESOURCES})
QT4_WRAP_UI(QT_FORMS_HPP ${QT_FORMS})
QT4_WRAP_CPP(QT_MOC_HPP ${QT_MOC})

##############################################################################
# Sources
##############################################################################

file(GLOB_RECURSE QT_SOURCES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} FOLLOW_SYMLINKS src/*.cpp)

##############################################################################
# Binaries
##############################################################################

rosbuild_add_executable(guiNode ${QT_SOURCES} ${QT_RESOURCES_CPP} ${QT_FORMS_HPP} ${QT_MOC_HPP})
# Include our libraries, they are all exported in Libraries/LibrariesExport.cmake
include_directories("${NODE_DELTA_ROBOT}")

# Link target to our libraries
#target_link_libraries(deltarobot huniplacer)

# MUST be called after lcv_rospack_init to clean up after ROSBUILD!
rexos_rospack_end()
target_link_libraries(guiNode ${QT_LIBRARIES})
