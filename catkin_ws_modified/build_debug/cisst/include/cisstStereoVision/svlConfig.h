/* -*- Mode: C++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*-    */
/* ex: set filetype=cpp softtabstop=4 shiftwidth=4 tabstop=4 cindent expandtab: */

/*
  $Id$

  Author(s): Anton Deguet
  Created on: 2009-01-27

  (C) Copyright 2004-2014 Johns Hopkins University (JHU), All Rights Reserved.

--- begin cisst license - do not edit ---

This software is provided "as is" under an open source license, with
no warranty.  The complete license can be found in license.txt and
http://www.cisst.org/cisst/license.txt.

--- end cisst license ---

*/

#ifndef _svlConfig_h
#define _svlConfig_h

#include <cisstConfig.h>

// Using OpenCV for optimized image processing
#define CISST_SVL_HAS_OPENCV2 1

// for backward compatibilities
#define CISST_SVL_HAS_OPENCV CISST_SVL_HAS_OPENCV2

// Using ZLIB for optimized image processing
#define CISST_SVL_HAS_ZLIB 1

// Support for Videre Design SVS
#define CISST_SVL_HAS_SVS 0

// Support for DirectShow
#define CISST_SVL_HAS_DIRECTSHOW 0

// Support for libDC1394
#define CISST_SVL_HAS_DC1394 1

// Support for IEEE1394B switch on Darwin
#define CISST_SVL_DC1394_ENABLE_800Mbps 1

// Support for FFMPEG
#define CISST_SVL_HAS_FFMPEG 1

// Support for video4linux2
#define CISST_SVL_HAS_VIDEO4LINUX2 1

// Support for video4linux2
#define CISST_SVL_HAS_MIL 0

// Support for X11
#define CISST_SVL_HAS_X11 1

// Support for Xvideo
#define CISST_SVL_HAS_XV 0

// Support for JPEG
#define CISST_SVL_HAS_JPEG 1

// Support for PNG
#define CISST_SVL_HAS_PNG 1

// Support for CUDA
#define CISST_SVL_HAS_CUDA 0

// Support for BLACKMAGIC DECKLINK
#define CISST_SVL_HAS_BM_DECKLINK 0

// Whether or not to use cisstNetlib
#define CISST_SVL_HAS_CISSTNETLIB 1

#endif // _svlConfig_h


