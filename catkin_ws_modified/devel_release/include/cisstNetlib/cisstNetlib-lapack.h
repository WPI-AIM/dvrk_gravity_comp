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

#ifndef _cisstNetlib_lapack_h
#define _cisstNetlib_lapack_h

#include <cisstNetlib/cisstNetlib-types.h>


int cisstNetlib_dgels_(char * trans,
                       CISSTNETLIB_INTEGER * m,
                       CISSTNETLIB_INTEGER * n,
                       CISSTNETLIB_INTEGER * nrhs,
                       CISSTNETLIB_DOUBLE * a,
                       CISSTNETLIB_INTEGER * lda,
                       CISSTNETLIB_DOUBLE * b,
                       CISSTNETLIB_INTEGER * ldb,
                       CISSTNETLIB_DOUBLE * work,
                       CISSTNETLIB_INTEGER * lwork,
                       CISSTNETLIB_INTEGER * info);

int cisstNetlib_dgesvd_(char * jobu,
                        char * jobvt,
                        CISSTNETLIB_INTEGER * m,
                        CISSTNETLIB_INTEGER * n,
                        CISSTNETLIB_DOUBLE * a,
                        CISSTNETLIB_INTEGER * lda,
                        CISSTNETLIB_DOUBLE * s,
                        CISSTNETLIB_DOUBLE * u,
                        CISSTNETLIB_INTEGER * ldu,
                        CISSTNETLIB_DOUBLE * vt,
                        CISSTNETLIB_INTEGER * ldvt,
                        CISSTNETLIB_DOUBLE * work,
                        CISSTNETLIB_INTEGER * lwork,
                        CISSTNETLIB_INTEGER * info);

int cisstNetlib_dgetrf_(CISSTNETLIB_INTEGER * m,
                        CISSTNETLIB_INTEGER * n ,
                        CISSTNETLIB_DOUBLE * a,
                        CISSTNETLIB_INTEGER * lda,
                        CISSTNETLIB_INTEGER * ipiv,
                        CISSTNETLIB_INTEGER * info);

int cisstNetlib_dgetri_(CISSTNETLIB_INTEGER * n,
                        CISSTNETLIB_DOUBLE * a,
                        CISSTNETLIB_INTEGER * lda,
                        CISSTNETLIB_INTEGER * ipiv,
                        CISSTNETLIB_DOUBLE * work,
                        CISSTNETLIB_INTEGER * lwork,
                        CISSTNETLIB_INTEGER * info);

void cisstNetlib_dgemm_(char * TRANSA,
                        char * TRANSB,
                        CISSTNETLIB_INTEGER * M,
                        CISSTNETLIB_INTEGER * N,
                        CISSTNETLIB_INTEGER * K,
                        CISSTNETLIB_DOUBLE * ALPHA,
                        CISSTNETLIB_DOUBLE * A,
                        CISSTNETLIB_INTEGER * LDA,
                        CISSTNETLIB_DOUBLE * B,
                        CISSTNETLIB_INTEGER * LDB,
                        CISSTNETLIB_DOUBLE * BETA,
                        CISSTNETLIB_DOUBLE * C,
                        CISSTNETLIB_INTEGER * LDC);

void cisstNetlib_dscal_(CISSTNETLIB_INTEGER * N,
                        CISSTNETLIB_DOUBLE * DA,
                        CISSTNETLIB_DOUBLE * DX,
                        CISSTNETLIB_INTEGER * INCX);

void cisstNetlib_dgelss_(CISSTNETLIB_INTEGER * M,
                         CISSTNETLIB_INTEGER * N,
                         CISSTNETLIB_INTEGER * NRHS,
                         CISSTNETLIB_DOUBLE * A,
                         CISSTNETLIB_INTEGER * LDA,
                         CISSTNETLIB_DOUBLE * B,
                         CISSTNETLIB_INTEGER * LDB,
                         CISSTNETLIB_DOUBLE * S,
                         CISSTNETLIB_DOUBLE * RCOND,
                         CISSTNETLIB_INTEGER * RANK,
                         CISSTNETLIB_DOUBLE * WORK,
                         CISSTNETLIB_INTEGER * LWORK,
                         CISSTNETLIB_INTEGER * INFO);

void cisstNetlib_dgeev_(char * JOBVL,
                        char * JOBVR,
                        CISSTNETLIB_INTEGER * N,
                        CISSTNETLIB_DOUBLE * A,
                        CISSTNETLIB_INTEGER * LDA,
                        CISSTNETLIB_DOUBLE * WR,
                        CISSTNETLIB_DOUBLE * WI,
                        CISSTNETLIB_DOUBLE * VL,
                        CISSTNETLIB_INTEGER * LDVL,
                        CISSTNETLIB_DOUBLE * VR,
                        CISSTNETLIB_INTEGER * LDVR,
                        CISSTNETLIB_DOUBLE * WORK,
                        CISSTNETLIB_INTEGER * LWORK,
                        CISSTNETLIB_INTEGER * INFO);

#endif // _cisstNetlib_lapack_h

