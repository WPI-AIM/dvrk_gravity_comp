#! /bin/tcsh

# $Id$

# Author(s): Anton Deguet
# Created on: 2006-05-02

# (C) Copyright 2006-2014 Johns Hopkins University (JHU), All Rights
# Reserved.

# Always edit the source file: cisstvars.csh.in
# Do not edit the generated file: cisstvars.csh

# --- begin cisst license - do not edit ---
#
# This software is provided "as is" under an open source license, with
# no warranty.  The complete license can be found in license.txt and
# http://www.cisst.org/cisst/license.txt.
#
# --- end cisst license ---


set CISST_DIR="/home/davincic2/catkin_ws/build_release/cisst"

set OS=`uname`

setenv PATH "${CISST_DIR}/bin:$PATH"
setenv CISST_ROOT "${CISST_DIR}"

# Path to dynamic libraries
if (${OS} == "Darwin") then
    if !($?DYLD_LIBRARY_PATH) then
        set LIBRARY_PATH="${CISST_DIR}/lib"
    else
        set LIBRARY_PATH="${CISST_DIR}/lib:$DYLD_LIBRARY_PATH"
    endif
else
    if !($?LD_LIBRARY_PATH) then
        set LIBRARY_PATH="${CISST_DIR}/lib"
    else
        set LIBRARY_PATH="${CISST_DIR}/lib:$LD_LIBRARY_PATH"
    endif
endif

# Path to Python extensions
if !($?PYTHONPATH) then
    setenv PYTHONPATH "${CISST_DIR}/lib"
else
    setenv PYTHONPATH "${CISST_DIR}/lib:$PYTHONPATH"
endif

# Export based on OS
if (${OS} == "Darwin") then
    setenv DYLD_LIBRARY_PATH "${LIBRARY_PATH}"
else
    setenv LD_LIBRARY_PATH "${LIBRARY_PATH}"
endif
