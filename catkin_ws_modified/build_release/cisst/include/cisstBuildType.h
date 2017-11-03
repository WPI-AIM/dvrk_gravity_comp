/* -*- Mode: C++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*-    */
/* ex: set filetype=cpp softtabstop=4 shiftwidth=4 tabstop=4 cindent expandtab: */

/*
  $Id$

  Author(s):  Anton Deguet
  Created on: 2012-03-05

  (C) Copyright 2012 Johns Hopkins University (JHU), All Rights
  Reserved.

--- begin cisst license - do not edit ---

This software is provided "as is" under an open source license, with
no warranty.  The complete license can be found in license.txt and
http://www.cisst.org/cisst/license.txt.

--- end cisst license ---

*/

#pragma once

#ifndef _cisstBuildType_h
#define _cisstBuildType_h

// cisst build type and build suffix

/*! CISST_BUILD_TYPE can be used to provide an information re. the
  options used to compile cisst (how!).  To find an executable or
  dynamic library, please use CISST_BUILD_SUFFIX. */
#define CISST_BUILD_TYPE "Release"

/*! CISST_BUILD_SUFFIX can be used to find a binary once compiled
  (where!).  CMake creates sub-directories using the build type
  strings (e.g. Debug, Release, RelWithDebInfo, ...) for most IDE
  (Visual Studio, Xcode, ...).  To find an executable, one can use
  cmnPath to look in CISST_ROOT/bin/CISST_BUILD_SUFFIX.

  For other generators, changing the build type doesn't change the
  build destination (e.g. for GNU Make, executables go in
  CISST_ROOT/bin).

  If one needs to determine how the binaries where compiled, please
  use CISST_BUILD_TYPE.
*/
#define CISST_BUILD_SUFFIX "."

#endif // _cisstBuildType_h
