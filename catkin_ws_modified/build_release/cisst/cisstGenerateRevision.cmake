#
# Cmake configuration file for the installed version of cisst
#
# Author(s):  Anton Deguet
# Created on: 2011-11-08
#
# (C) Copyright 2011-2016 Johns Hopkins University (JHU), All Rights Reserved.
#
# --- begin cisst license - do not edit ---
#
# This software is provided "as is" under an open source license, with
# no warranty.  The complete license can be found in license.txt and
# http://www.cisst.org/cisst/license.txt.
#
# --- end cisst license ---

set (CISST_VERSION_MAJOR "1")
set (CISST_VERSION_MINOR "0")
set (CISST_VERSION "1.0.8")

set (CISST_REVISION_DIR "/home/davincic2/catkin_ws/src/cisst-saw/cisst")
set (CISST_REVISION_HEADER_SRC "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstRevision.h.in")
set (CISST_REVISION_HEADER "/home/davincic2/catkin_ws/build_release/cisst/include/cisstRevision.h")
set (GIT_FOUND TRUE)
set (GIT_EXECUTABLE "/usr/bin/git")

if (GIT_FOUND)
  execute_process (COMMAND ${GIT_EXECUTABLE} describe
                   WORKING_DIRECTORY ${CISST_REVISION_DIR}
                   TIMEOUT 1
                   OUTPUT_VARIABLE CISST_GIT_DESCRIBE)
  string (STRIP "${CISST_GIT_DESCRIBE}" CISST_GIT_DESCRIBE)
else (GIT_FOUND)
  set (CISST_GIT_DESCRIBE "git-version-unavailable")
endif (GIT_FOUND)

message (STATUS "Found Git revision: ${CISST_GIT_DESCRIBE}")

configure_file ("${CISST_REVISION_HEADER_SRC}"
                "${CISST_REVISION_HEADER}")
