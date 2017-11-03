/* -*- Mode: C++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*-    */
/* ex: set filetype=cpp softtabstop=4 shiftwidth=4 tabstop=4 cindent expandtab: */

/*
  Author(s):  Anton Deguet
  Created on: 2004-02-18

  (C) Copyright 2004-2015 Johns Hopkins University (JHU), All Rights Reserved.

--- begin cisst license - do not edit ---

This software is provided "as is" under an open source license, with
no warranty.  The complete license can be found in license.txt and
http://www.cisst.org/cisst/license.txt.

--- end cisst license ---

*/

#pragma once

#ifndef _cisstConfig_h
#define _cisstConfig_h

// cisst version
#define CISST_VERSION_MAJOR 1
#define CISST_VERSION_MINOR 0
#define CISST_VERSION_PATCH 8
#define CISST_VERSION "1.0.8"

// Deprecated paths/macros
#define CISST_SOURCE_ROOT                       CISST_SOURCE_ROOT_is_deprecated_use_CISST_ROOT_and_cmnPath_instead__See_https_trac_dot_lcsr_dot_jhu_dot_edu_slash_cisst_slash_wiki_slash_UsingCMake
#define CISST_BUILD_ROOT                         CISST_BUILD_ROOT_is_deprecated_use_CISST_ROOT_and_cmnPath_instead__See_https_trac_dot_lcsr_dot_jhu_dot_edu_slash_cisst_slash_wiki_slash_UsingCMake
#define CISST_BUILD_LINK_DIRECTORIES CISST_BUILD_LINK_DIRECTORIES_is_deprecated_use_CISST_ROOT_and_cmnPath_instead__See_https_trac_dot_lcsr_dot_jhu_dot_edu_slash_cisst_slash_wiki_slash_UsingCMake

// Was cisst compiled as shared libraries or static
#define CISST_BUILD_SHARED_LIBS 1

// For MSVC, CMake generator assumes either 32 or 64 bits compiler
#define CISST_CMAKE_COMPILER_IS_MSVC_64 0

// To allow overloading of functions for size_t
#define CISST_SIZE_T_NATIVE 0

// For CMN_LOG macro
#define CISST_OSTREAM_CAN_CAST_TO_VOID_PTR 1
#define CISST_OSTREAM_CAN_CAST_TO_INT 0

// Do we have isfinite global function
#define CISST_HAS_ISFINITE 1

// RTAI Realtime extension for Linux
#define CISST_HAS_LINUX_RTAI 0

// Xenomai Realtime extension for Linux
#define CISST_HAS_LINUX_XENOMAI 0

// Using XML or not
#define CISST_HAS_XML 1

// Using IRE (and Swig/Python) or not
#define CISST_HAS_IRE 0

// Using FLTK or not
#define CISST_HAS_FLTK 1

// Using Qt4 or not
#define CISST_HAS_QT4 0

// Using Qt5 or not
#define CISST_HAS_QT5 1

// Any version of Qt
#define CISST_HAS_QT 1

// Using OpenGL or not
#define CISST_HAS_OPENGL 1

// Using IOS or not
#define CISST_HAS_IOS 0

// Using JSonCpp, compiled along cisst
#define CISST_HAS_JSON 1

// Using SI units (ie meters) or mm for distances
#define CISST_USE_SI_UNITS 1

#endif // _cisstConfig_h
