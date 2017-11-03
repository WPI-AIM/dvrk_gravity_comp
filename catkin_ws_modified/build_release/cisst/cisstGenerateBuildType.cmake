#
# Cmake configuration file for the installed version of cisst
#
# Author(s):  Anton Deguet
# Created on: 2012-03-05
#
# (C) Copyright 2012-2016 Johns Hopkins University (JHU), All Rights Reserved.
#
# --- begin cisst license - do not edit ---
#
# This software is provided "as is" under an open source license, with
# no warranty.  The complete license can be found in license.txt and
# http://www.cisst.org/cisst/license.txt.
#
# --- end cisst license ---

if (NOT "${CISST_CFG_INTDIR}" STREQUAL "." )
  set (CISST_BUILD_TYPE ${CISST_CFG_INTDIR})
endif ()

message (STATUS "Build type is: ${CISST_BUILD_TYPE}\nBuild suffix is: ${CISST_CFG_INTDIR}")

configure_file ("/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstBuildType.h.in"
                "/home/davincic2/catkin_ws/build_release/cisst/include/cisstBuildType.h")
