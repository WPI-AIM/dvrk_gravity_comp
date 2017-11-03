# Install script for directory: /home/davincic2/catkin_ws/build_debug/cisst/cisst-dependencies/cisstJSONExternal/src/cisstJSONExternal/include

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/home/davincic2/catkin_ws/build_debug/cisst/cisstJSON")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "Debug")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "1")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/json" TYPE FILE FILES
    "/home/davincic2/catkin_ws/build_debug/cisst/cisst-dependencies/cisstJSONExternal/src/cisstJSONExternal/include/json/version.h"
    "/home/davincic2/catkin_ws/build_debug/cisst/cisst-dependencies/cisstJSONExternal/src/cisstJSONExternal/include/json/assertions.h"
    "/home/davincic2/catkin_ws/build_debug/cisst/cisst-dependencies/cisstJSONExternal/src/cisstJSONExternal/include/json/features.h"
    "/home/davincic2/catkin_ws/build_debug/cisst/cisst-dependencies/cisstJSONExternal/src/cisstJSONExternal/include/json/value.h"
    "/home/davincic2/catkin_ws/build_debug/cisst/cisst-dependencies/cisstJSONExternal/src/cisstJSONExternal/include/json/autolink.h"
    "/home/davincic2/catkin_ws/build_debug/cisst/cisst-dependencies/cisstJSONExternal/src/cisstJSONExternal/include/json/reader.h"
    "/home/davincic2/catkin_ws/build_debug/cisst/cisst-dependencies/cisstJSONExternal/src/cisstJSONExternal/include/json/json.h"
    "/home/davincic2/catkin_ws/build_debug/cisst/cisst-dependencies/cisstJSONExternal/src/cisstJSONExternal/include/json/writer.h"
    "/home/davincic2/catkin_ws/build_debug/cisst/cisst-dependencies/cisstJSONExternal/src/cisstJSONExternal/include/json/config.h"
    "/home/davincic2/catkin_ws/build_debug/cisst/cisst-dependencies/cisstJSONExternal/src/cisstJSONExternal/include/json/forwards.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

