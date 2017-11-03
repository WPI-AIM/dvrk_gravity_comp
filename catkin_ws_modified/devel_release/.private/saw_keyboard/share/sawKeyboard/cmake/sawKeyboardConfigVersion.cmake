# Modified from CMake distribution to avoid dependency on CMake > 2.8.7 (aka Ubuntu 12.04)
# For cisst/SAW developement we want same major/minor

set(PACKAGE_VERSION "1.1.0")

if("1.1.0" MATCHES "^([0-9]+\\.[0-9]+)\\..*") # strip the patch/tweak version
  set(CVF_VERSION_NO_PATCH_NOR_TWEAK "${CMAKE_MATCH_1}")
else()
  set(CVF_VERSION_NO_PATCH_NOR_TWEAK "1.1.0")
endif()

if("${PACKAGE_FIND_VERSION}" MATCHES "^([0-9]+\\.[0-9]+)\\..*") # strip the patch/tweak version
  set(REQUESTED_VERSION_NO_PATCH_NOR_TWEAK "${CMAKE_MATCH_1}")
else()
  set(REQUESTED_VERSION_NO_PATCH_NOR_TWEAK "${PACKAGE_FIND_VERSION}")
endif()

if("${REQUESTED_VERSION_NO_PATCH_NOR_TWEAK}" STREQUAL "${CVF_VERSION_NO_PATCH_NOR_TWEAK}")
  set(PACKAGE_VERSION_COMPATIBLE TRUE)
else()
  set(PACKAGE_VERSION_COMPATIBLE FALSE)
endif()

if( "${PACKAGE_FIND_VERSION}" STREQUAL "${PACKAGE_VERSION}")
  set(PACKAGE_VERSION_EXACT TRUE)
endif()


# if the installed or the using project don't have CMAKE_SIZEOF_VOID_P set, ignore it:
if("${CMAKE_SIZEOF_VOID_P}"  STREQUAL ""  OR "8" STREQUAL "")
   return()
endif()

# check that the installed version has the same 32/64bit-ness as the one which is currently searching:
if(NOT "${CMAKE_SIZEOF_VOID_P}" STREQUAL "8")
  math(EXPR installedBits "8 * 8")
  set(PACKAGE_VERSION "${PACKAGE_VERSION} (${installedBits}bit)")
  set(PACKAGE_VERSION_UNSUITABLE TRUE)
endif()
