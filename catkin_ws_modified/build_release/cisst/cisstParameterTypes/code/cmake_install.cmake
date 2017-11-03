# Install script for directory: /home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstParameterTypes/code

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/home/davincic2/catkin_ws/install_release")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "Release")
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

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstParameterTypes")
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstParameterTypes.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstParameterTypes.so")
    FILE(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstParameterTypes.so"
         RPATH "")
  ENDIF()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/davincic2/catkin_ws/build_release/cisst/lib/libcisstParameterTypes.so")
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstParameterTypes.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstParameterTypes.so")
    FILE(RPATH_REMOVE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstParameterTypes.so")
    IF(CMAKE_INSTALL_DO_STRIP)
      EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstParameterTypes.so")
    ENDIF(CMAKE_INSTALL_DO_STRIP)
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstParameterTypes")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstParameterTypes")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.0/cmake" TYPE FILE FILES "/home/davincic2/catkin_ws/build_release/cisst/share/cisst-1.0/cmake/cisstParameterTypesInternal.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstParameterTypes")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstParameterTypes")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.0/cmake" TYPE FILE FILES "/home/davincic2/catkin_ws/build_release/cisst/share/cisst-1.0/cmake/cisstParameterTypesInternal.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstParameterTypes")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstParameterTypes")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.0/cmake" TYPE FILE FILES "/home/davincic2/catkin_ws/build_release/cisst/share/cisst-1.0/cmake/cisstParameterTypesInternal.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstParameterTypes")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstParameterTypes")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.0/cmake" TYPE FILE FILES "/home/davincic2/catkin_ws/build_release/cisst/share/cisst-1.0/cmake/cisstParameterTypesInternal.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstParameterTypes")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstParameterTypes")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cisstParameterTypes" TYPE FILE FILES
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstParameterTypes/prmActuatorParameters.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstParameterTypes/prmActuatorState.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstParameterTypes/prmEventButton.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstParameterTypes/prmExport.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstParameterTypes/prmForceCartesianGet.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstParameterTypes/prmForceCartesianSet.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstParameterTypes/prmForceTorqueJointSet.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstParameterTypes/prmForwardDeclarations.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstParameterTypes/prmGainParameters.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstParameterTypes/prmJointType.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstParameterTypes/prmMaskedVector.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstParameterTypes/prmMotionBase.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstParameterTypes/prmPositionCartesianSet.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstParameterTypes/prmPositionJointSet.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstParameterTypes/prmRobotState.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstParameterTypes/prmTransformationBase.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstParameterTypes/prmTransformationDynamic.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstParameterTypes/prmTransformationFixed.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstParameterTypes/prmTransformationManager.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstParameterTypes/prmVelocityCartesianGet.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstParameterTypes/prmVelocityCartesianSet.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstParameterTypes/prmVelocityJointGet.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstParameterTypes/prmVelocityJointSet.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstParameterTypes")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstParameterTypes")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES "/home/davincic2/catkin_ws/build_release/cisst/include/cisstParameterTypes.h")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstParameterTypes")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cisstParameterTypes" TYPE FILE FILES
    "/home/davincic2/catkin_ws/build_release/cisst/include/cisstParameterTypes/prmActuatorJointCoupling.h"
    "/home/davincic2/catkin_ws/build_release/cisst/include/cisstParameterTypes/prmPositionCartesianGet.h"
    "/home/davincic2/catkin_ws/build_release/cisst/include/cisstParameterTypes/prmPositionJointGet.h"
    "/home/davincic2/catkin_ws/build_release/cisst/include/cisstParameterTypes/prmFixtureGainCartesianSet.h"
    "/home/davincic2/catkin_ws/build_release/cisst/include/cisstParameterTypes/prmIMUSensors.h"
    "/home/davincic2/catkin_ws/build_release/cisst/include/cisstParameterTypes/prmStateJoint.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

