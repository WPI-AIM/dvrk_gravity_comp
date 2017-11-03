# Install script for directory: /home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstOSAbstraction/code

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/home/davincic2/catkin_ws/install_debug")
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

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstOSAbstraction")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cisstOSAbstraction" TYPE FILE FILES "/home/davincic2/catkin_ws/build_debug/cisst/include/cisstOSAbstraction/osaConfig.h")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstOSAbstraction")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstOSAbstraction")
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstOSAbstraction.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstOSAbstraction.so")
    FILE(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstOSAbstraction.so"
         RPATH "")
  ENDIF()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/davincic2/catkin_ws/build_debug/cisst/lib/libcisstOSAbstraction.so")
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstOSAbstraction.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstOSAbstraction.so")
    FILE(RPATH_REMOVE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstOSAbstraction.so")
    IF(CMAKE_INSTALL_DO_STRIP)
      EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstOSAbstraction.so")
    ENDIF(CMAKE_INSTALL_DO_STRIP)
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstOSAbstraction")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstOSAbstraction")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.0/cmake" TYPE FILE FILES "/home/davincic2/catkin_ws/build_debug/cisst/share/cisst-1.0/cmake/cisstOSAbstractionInternal.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstOSAbstraction")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstOSAbstraction")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cisstOSAbstraction" TYPE FILE FILES
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstOSAbstraction/osaCPUAffinity.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstOSAbstraction/osaCriticalSection.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstOSAbstraction/osaDynamicLoader.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstOSAbstraction/osaDynamicLoaderAndFactory.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstOSAbstraction/osaExport.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstOSAbstraction/osaForwardDeclarations.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstOSAbstraction/osaGetTime.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstOSAbstraction/osaMutex.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstOSAbstraction/osaPipeExec.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstOSAbstraction/osaSerialPort.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstOSAbstraction/osaSleep.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstOSAbstraction/osaSocket.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstOSAbstraction/osaSocketServer.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstOSAbstraction/osaStopwatch.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstOSAbstraction/osaThread.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstOSAbstraction/osaThreadAdapter.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstOSAbstraction/osaThreadBuddy.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstOSAbstraction/osaThreadSignal.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstOSAbstraction/osaThreadedLogFile.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstOSAbstraction/osaTimeServer.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstOSAbstraction/osaTripleBuffer.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstOSAbstraction")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstOSAbstraction")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES "/home/davincic2/catkin_ws/build_debug/cisst/include/cisstOSAbstraction.h")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstOSAbstraction")

