# Install script for directory: /home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/code

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

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstMultiTask")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cisstMultiTask" TYPE FILE FILES "/home/davincic2/catkin_ws/build_release/cisst/include/cisstMultiTask/mtsConfig.h")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstMultiTask")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstMultiTask")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.0/cmake" TYPE FILE FILES "/home/davincic2/catkin_ws/build_release/cisst/share/cisst-1.0/cmake/cisstMultiTaskBuild.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstMultiTask")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstMultiTask")
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMultiTask.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMultiTask.so")
    FILE(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMultiTask.so"
         RPATH "")
  ENDIF()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/davincic2/catkin_ws/build_release/cisst/lib/libcisstMultiTask.so")
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMultiTask.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMultiTask.so")
    FILE(RPATH_REMOVE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMultiTask.so")
    IF(CMAKE_INSTALL_DO_STRIP)
      EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMultiTask.so")
    ENDIF(CMAKE_INSTALL_DO_STRIP)
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstMultiTask")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstMultiTask")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.0/cmake" TYPE FILE FILES "/home/davincic2/catkin_ws/build_release/cisst/share/cisst-1.0/cmake/cisstMultiTaskInternal.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstMultiTask")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstMultiTask")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.0/cmake" TYPE FILE FILES "/home/davincic2/catkin_ws/build_release/cisst/share/cisst-1.0/cmake/cisstMultiTaskInternal.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstMultiTask")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstMultiTask")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.0/cmake" TYPE FILE FILES "/home/davincic2/catkin_ws/build_release/cisst/share/cisst-1.0/cmake/cisstMultiTaskInternal.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstMultiTask")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstMultiTask")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cisstMultiTask" TYPE FILE FILES
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCallableQualifiedReadBase.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCallableQualifiedReadMethod.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCallableQualifiedReadReturnVoidMethod.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCallableReadBase.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCallableReadMethod.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCallableReadReturnVoidMethod.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCallableVoidBase.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCallableVoidFunction.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCallableVoidMethod.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCallableVoidReturnBase.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCallableVoidReturnMethod.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCallableWriteReturnBase.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCallableWriteReturnMethod.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCollectorBase.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCollectorEvent.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCollectorFactory.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCollectorState.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCommandBase.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCommandFilteredQueuedWrite.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCommandFilteredWrite.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCommandQualifiedRead.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCommandQueuedVoid.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCommandQueuedVoidReturn.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCommandQueuedWrite.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCommandQueuedWriteBase.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCommandQueuedWriteReturn.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCommandRead.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCommandVoid.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCommandVoidReturn.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCommandWrite.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCommandWriteBase.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCommandWriteReturn.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsComponent.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsComponentAddLatency.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsComponentGeneratorMacros.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsComponentViewer.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsConnection.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsEventReceiver.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsExport.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsFixedSizeVector.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsFixedSizeVectorTypes.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsForwardDeclarations.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsFunctionBase.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsFunctionQualifiedRead.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsFunctionRead.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsFunctionVoid.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsFunctionVoidReturn.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsFunctionWrite.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsFunctionWriteReturn.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsGenericObject.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsGenericObjectProxy.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsInterface.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsInterfaceInput.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsInterfaceOutput.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsInterfaceProvided.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsInterfaceRequired.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsIntervalStatistics.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsLODMultiplexerStreambuf.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsMacros.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsMailBox.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsManagerComponentBase.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsManagerComponentClient.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsManagerComponentServer.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsManagerComponentServices.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsManagerGlobal.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsManagerGlobalInterface.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsManagerLocal.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsManagerLocalInterface.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsMatrix.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsMulticastCommandVoid.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsMulticastCommandWrite.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsMulticastCommandWriteBase.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsParameterTypesOld.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsQueue.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsSocketProxyClient.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsSocketProxyCommon.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsSocketProxyServer.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsStateArray.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsStateArrayBase.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsStateData.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsStateIndex.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsStateTable.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsTask.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsTaskContinuous.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsTaskFromCallback.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsTaskFromSignal.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsTaskManager.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsTaskPeriodic.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsTransformationTypes.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsVector.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsWatchdogClient.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstMultiTask/mtsWatchdogServer.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstMultiTask")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstMultiTask")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES "/home/davincic2/catkin_ws/build_release/cisst/include/cisstMultiTask.h")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstMultiTask")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cisstMultiTask" TYPE FILE FILES
    "/home/davincic2/catkin_ws/build_release/cisst/include/cisstMultiTask/mtsInterfaceCommon.h"
    "/home/davincic2/catkin_ws/build_release/cisst/include/cisstMultiTask/mtsComponentState.h"
    "/home/davincic2/catkin_ws/build_release/cisst/include/cisstMultiTask/mtsExecutionResult.h"
    "/home/davincic2/catkin_ws/build_release/cisst/include/cisstMultiTask/mtsParameterTypes.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

