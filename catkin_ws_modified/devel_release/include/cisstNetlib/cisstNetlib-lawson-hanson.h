/* -*- Mode: C++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*-    */
/* ex: set filetype=cpp softtabstop=4 shiftwidth=4 tabstop=4 cindent expandtab: */

/*
  $Id$

  Author(s):  Anton Deguet
  Created on: 2012-09-25

  (C) Copyright 2012-2013 Johns Hopkins University (JHU), All Rights
  Reserved.

--- begin cisst license - do not edit ---

This software is provided "as is" under an open source license, with
no warranty.  The complete license can be found in license.txt and
http://www.cisst.org/cisst/license.txt.

--- end cisst license ---

*/

#pragma once

#ifndef _cisstNetlib_lawson_hanson_h
#define _cisstNetlib_lawson_hanson_h

#include <cisstNetlib/cisstNetlib-types.h>

int cisstNetlib_svdrs_(CISSTNETLIB_DOUBLE * a,
                       CISSTNETLIB_INTEGER * mda,
                       CISSTNETLIB_INTEGER * m1,
                       CISSTNETLIB_INTEGER * n1,
                       CISSTNETLIB_DOUBLE * b,
                       CISSTNETLIB_INTEGER * mdb,
                       CISSTNETLIB_INTEGER * nb,
                       CISSTNETLIB_DOUBLE * s,
                       CISSTNETLIB_DOUBLE * work);

int cisstNetlib_nnls_(CISSTNETLIB_DOUBLE * a,
                      CISSTNETLIB_INTEGER * mda,
                      CISSTNETLIB_INTEGER * m,
                      CISSTNETLIB_INTEGER * n,
                      CISSTNETLIB_DOUBLE * b,
                      CISSTNETLIB_DOUBLE * x,
                      CISSTNETLIB_DOUBLE * rnorm,
                      CISSTNETLIB_DOUBLE * w,
                      CISSTNETLIB_DOUBLE * zz,
                      CISSTNETLIB_INTEGER * index,
                      CISSTNETLIB_INTEGER * mode);

CISSTNETLIB_DOUBLE cisstNetlib_diff_(CISSTNETLIB_DOUBLE * x,
                                     CISSTNETLIB_DOUBLE * y);

#endif // _cisstNetlib_lawson_hanson_h

