#
# (C) Copyright 2011-2016 Johns Hopkins University (JHU), All Rights Reserved.
#

set (sawControllers_VERSION_MAJOR "1")
set (sawControllers_VERSION_MINOR "4")
set (sawControllers_VERSION_PATCH "0")
set (sawControllers_VERSION "1.4.0")

# figure out if this file is where it was configured (build tree) or
# not (installed tree)
set (sawControllers_CMAKE_CONFIG_FILE "/home/davincic2/catkin_ws/devel_release/.private/saw_controllers/share/sawControllers/cmake/sawControllersConfig.cmake")
get_filename_component (THIS_FILE_PATH
                        ${CMAKE_CURRENT_LIST_FILE}
                        REALPATH)

if ("${sawControllers_CMAKE_CONFIG_FILE}" STREQUAL "${THIS_FILE_PATH}")
  # we're using the build directories
  set (sawControllers_INCLUDE_DIR "/home/davincic2/catkin_ws/src/cisst-saw/sawControllers/components/include;/home/davincic2/catkin_ws/build_release/saw_controllers/include")
  set (sawControllers_LIBRARY_DIR "/home/davincic2/catkin_ws/build_release/saw_controllers/lib")
else ()
  # try to find the install dir, we know the install is using
  # share/sawControllers so we can go ../..
  set (RELATIVE_INSTALL_DIR "${THIS_FILE_PATH}/../..")
  get_filename_component (ABSOLUTE_INSTALL_DIR "${RELATIVE_INSTALL_DIR}" ABSOLUTE)
  # set directories using the install dir
  set (sawControllers_INCLUDE_DIR "${ABSOLUTE_INSTALL_DIR}/include")
  set (sawControllers_LIBRARY_DIR "${ABSOLUTE_INSTALL_DIR}/lib")
endif ()

set (sawControllers_LIBRARIES   "sawControllers;sawControllersQt")
