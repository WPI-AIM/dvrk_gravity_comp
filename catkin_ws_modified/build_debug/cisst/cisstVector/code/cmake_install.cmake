# Install script for directory: /home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/code

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

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstVector")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.0/cmake" TYPE FILE FILES "/home/davincic2/catkin_ws/build_debug/cisst/share/cisst-1.0/cmake/cisstVectorExternal.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstVector")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstVector")
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so")
    FILE(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so"
         RPATH "")
  ENDIF()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/davincic2/catkin_ws/build_debug/cisst/lib/libcisstVector.so")
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so")
    FILE(RPATH_REMOVE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so")
    IF(CMAKE_INSTALL_DO_STRIP)
      EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so")
    ENDIF(CMAKE_INSTALL_DO_STRIP)
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstVector")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstVector")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.0/cmake" TYPE FILE FILES "/home/davincic2/catkin_ws/build_debug/cisst/share/cisst-1.0/cmake/cisstVectorInternal.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstVector")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstVector")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cisstVector" TYPE FILE FILES
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctAngleRotation2.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctAxisAngleRotation3.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctBarycentricVector.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctBinaryOperations.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctContainerTraits.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctDataFunctionsDynamicMatrix.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctDataFunctionsDynamicMatrixJSON.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctDataFunctionsDynamicVector.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctDataFunctionsDynamicVectorJSON.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctDataFunctionsFixedSizeMatrix.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctDataFunctionsFixedSizeMatrixJSON.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctDataFunctionsFixedSizeVector.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctDataFunctionsFixedSizeVectorJSON.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctDataFunctionsTransformations.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctDataFunctionsTransformationsJSON.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctDeterminant.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctDynamicCompactLoopEngines.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctDynamicConstMatrixBase.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctDynamicConstMatrixRef.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctDynamicConstNArrayBase.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctDynamicConstNArrayRef.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctDynamicConstVectorBase.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctDynamicConstVectorRef.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctDynamicMatrix.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctDynamicMatrixBase.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctDynamicMatrixLoopEngines.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctDynamicMatrixOwner.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctDynamicMatrixRef.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctDynamicMatrixRefOwner.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctDynamicMatrixTypes.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctDynamicNArray.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctDynamicNArrayBase.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctDynamicNArrayLoopEngines.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctDynamicNArrayOwner.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctDynamicNArrayRef.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctDynamicNArrayRefOwner.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctDynamicVector.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctDynamicVectorBase.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctDynamicVectorLoopEngines.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctDynamicVectorOwner.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctDynamicVectorRef.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctDynamicVectorRefOwner.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctDynamicVectorTypes.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctEulerRotation3.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctExport.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctFastCopy.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctFixedSizeConstMatrixBase.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctFixedSizeConstMatrixRef.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctFixedSizeConstVectorBase.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctFixedSizeConstVectorRef.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctFixedSizeMatrix.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctFixedSizeMatrixBase.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctFixedSizeMatrixLoopEngines.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctFixedSizeMatrixRef.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctFixedSizeMatrixTraits.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctFixedSizeMatrixTypes.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctFixedSizeVector.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctFixedSizeVectorBase.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctFixedSizeVectorRecursiveEngines.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctFixedSizeVectorRef.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctFixedSizeVectorTraits.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctFixedSizeVectorTypes.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctFixedStrideMatrixIterator.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctFixedStrideVectorIterator.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctForwardDeclarations.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctFrame4x4.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctFrame4x4Base.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctFrame4x4ConstBase.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctFrameBase.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctMatrixRotation2.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctMatrixRotation2Base.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctMatrixRotation3.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctMatrixRotation3Base.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctMatrixRotation3ConstBase.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctMatrixRotation3ConstRef.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctMatrixRotation3Ref.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctPlot2DBase.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctPlot2DOpenGL.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctPrintf.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctQuaternion.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctQuaternionBase.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctQuaternionRotation3.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctQuaternionRotation3Base.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctRandom.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctRandomDynamicMatrix.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctRandomDynamicNArray.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctRandomDynamicVector.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctRandomFixedSizeMatrix.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctRandomFixedSizeVector.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctRandomTransformations.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctRodriguezRotation3.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctRodriguezRotation3Base.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctStoreBackBinaryOperations.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctStoreBackUnaryOperations.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctTransformationTypes.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctTypes.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctUnaryOperations.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctVarStrideMatrixIterator.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctVarStrideNArrayIterator.h"
    "/home/davincic2/catkin_ws/src/cisst-saw/cisst/cisstVector/vctVarStrideVectorIterator.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstVector")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstVector")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES "/home/davincic2/catkin_ws/build_debug/cisst/include/cisstVector.h")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cisstVector")

