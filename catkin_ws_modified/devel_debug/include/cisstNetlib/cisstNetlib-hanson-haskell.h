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

#ifndef _cisstNetlib_hanson_haskell_h
#define _cisstNetlib_hanson_haskell_h

#include <cisstNetlib/cisstNetlib-types.h>

int cisstNetlib_lsei_(CISSTNETLIB_DOUBLE * w,
                      CISSTNETLIB_INTEGER * mdw,
                      CISSTNETLIB_INTEGER * me,
                      CISSTNETLIB_INTEGER * ma,
                      CISSTNETLIB_INTEGER * mg,
                      CISSTNETLIB_INTEGER * n,
                      CISSTNETLIB_DOUBLE * prgopt,
                      CISSTNETLIB_DOUBLE * x,
                      CISSTNETLIB_DOUBLE * rnorme,
                      CISSTNETLIB_DOUBLE * rnorml,
                      CISSTNETLIB_INTEGER * mode,
                      CISSTNETLIB_DOUBLE * ws,
                      CISSTNETLIB_INTEGER * ip);

void cisstNetlib_lsi_( CISSTNETLIB_DOUBLE * w,
                       CISSTNETLIB_INTEGER * mdw,
                       CISSTNETLIB_INTEGER * ma,
                       CISSTNETLIB_INTEGER * mg,
                       CISSTNETLIB_INTEGER * n,
                       CISSTNETLIB_DOUBLE * prgopt,
                       CISSTNETLIB_DOUBLE * x,
                       CISSTNETLIB_DOUBLE * rnorm,
                       CISSTNETLIB_INTEGER * mode,
                       CISSTNETLIB_DOUBLE * ws,
                       CISSTNETLIB_INTEGER * ip);

#endif // _cisstNetlib_hanson_haskell_h

