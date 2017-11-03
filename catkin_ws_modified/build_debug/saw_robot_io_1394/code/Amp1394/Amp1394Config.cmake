# - Config file for the Amp1394 package
# It defines the following variables
#  Amp1394_INCLUDE_DIR  - include directories for Amp1394
#  Amp1394_LIBRARY_DIR  - link library directories for Amp1394
#  Amp1394_LIBRARIES    - libraries to link against

# Version
set (Amp1394_VERSION_MAJOR "1")
set (Amp1394_VERSION_MINOR "2")
set (Amp1394_VERSION_PATCH "1")
set (Amp1394_VERSION "@Amp1394_VERSION")
 
# Compute paths
set (Amp1394_INCLUDE_DIR "/home/davincic2/catkin_ws/src/cisst-saw/sawRobotIO1394/components/code/Amp1394/lib;/home/davincic2/catkin_ws/build_debug/saw_robot_io_1394/code/Amp1394")
set (Amp1394_LIBRARY_DIR "/home/davincic2/catkin_ws/build_debug/saw_robot_io_1394/code/Amp1394/lib")
 
# These are IMPORTED targets created by Amp1394Targets.cmake
set (Amp1394_LIBRARIES Amp1394)
