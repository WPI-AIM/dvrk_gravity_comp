# Install script for directory: /home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstCommon/code

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

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstCommon")
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstCommon.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstCommon.so")
    FILE(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstCommon.so"
         RPATH "")
  ENDIF()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/davincic2/catkin_ws/build_debug/cisst/lib/libcisstCommon.so")
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstCommon.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstCommon.so")
    FILE(RPATH_REMOVE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstCommon.so")
    IF(CMAKE_INSTALL_DO_STRIP)
      EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstCommon.so")
    ENDIF(CMAKE_INSTALL_DO_STRIP)
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstCommon")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstCommon")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cisstCommon" TYPE FILE FILES
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstCommon/cmnAccessorMacros.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstCommon/cmnAssert.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstCommon/cmnCallbackStreambuf.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstCommon/cmnClassRegister.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstCommon/cmnClassRegisterMacros.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstCommon/cmnClassServices.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstCommon/cmnClassServicesBase.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstCommon/cmnCommandLineOptions.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstCommon/cmnConstants.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstCommon/cmnDataFormat.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstCommon/cmnDataFunctions.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstCommon/cmnDataFunctionsArray.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstCommon/cmnDataFunctionsEnumMacros.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstCommon/cmnDataFunctionsJSON.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstCommon/cmnDataFunctionsMacros.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstCommon/cmnDataFunctionsMatrixHelpers.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstCommon/cmnDataFunctionsString.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstCommon/cmnDataFunctionsVector.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstCommon/cmnDataFunctionsVectorHelpers.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstCommon/cmnDeSerializer.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstCommon/cmnExport.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstCommon/cmnExportMacros.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstCommon/cmnForwardDeclarations.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstCommon/cmnGenericObject.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstCommon/cmnGenericObjectProxy.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstCommon/cmnGetChar.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstCommon/cmnKbHit.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstCommon/cmnLODMultiplexerStreambuf.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstCommon/cmnLODOutputMultiplexer.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstCommon/cmnLogLoD.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstCommon/cmnLogger.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstCommon/cmnMultiplexerStreambuf.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstCommon/cmnMultiplexerStreambufProxy.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstCommon/cmnNamedMap.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstCommon/cmnObjectRegister.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstCommon/cmnOutputMultiplexer.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstCommon/cmnPath.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstCommon/cmnPortability.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstCommon/cmnPrintf.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstCommon/cmnRandomSequence.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstCommon/cmnRequiresDeepCopy.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstCommon/cmnSerializer.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstCommon/cmnStreamRawParser.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstCommon/cmnStrings.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstCommon/cmnThrow.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstCommon/cmnTokenizer.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstCommon/cmnTypeTraits.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstCommon/cmnUnits.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstCommon")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstCommon")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES "/home/davincic2/catkin_ws/build_debug/cisst/include/cisstCommon.h")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstCommon")

