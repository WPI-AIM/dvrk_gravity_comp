#! /bin/sh

# $Id$

# Author(s): Anton Deguet
# Created on: 2006-05-02

# (C) Copyright 2006-2014 Johns Hopkins University (JHU), All Rights
# Reserved.

# Always edit the source file: cisstvars.sh.in
# Do not edit the generated file: cisstvars.sh

# --- begin cisst license - do not edit ---
#
# This software is provided "as is" under an open source license, with
# no warranty.  The complete license can be found in license.txt and
# http://www.cisst.org/cisst/license.txt.
#
# --- end cisst license ---


CISST_DIR="/home/davincic2/catkin_ws/build_release/cisst"

OS=`uname`

PATH="${CISST_DIR}/bin:${PATH}"
CISST_ROOT="${CISST_DIR}"

# Path to dynamic libraries
if [ "${OS}" == "Darwin" ]
then
    if [ -z "${DYLD_LIBRARY_PATH}" ]
    then
        LIBRARY_PATH="${CISST_DIR}/lib"
    else
        LIBRARY_PATH="${CISST_DIR}/lib:${DYLD_LIBRARY_PATH}"
    fi
else
    if [ -z "${LD_LIBRARY_PATH}" ]
    then
        LIBRARY_PATH="${CISST_DIR}/lib"
    else
        LIBRARY_PATH="${CISST_DIR}/lib:${LD_LIBRARY_PATH}"
    fi
fi

# Path to Python extensions
if [ -z "${PYTHONPATH}" ]
then
    PYTHONPATH="${CISST_DIR}/lib"
else
    PYTHONPATH="${CISST_DIR}/lib:${PYTHONPATH}"
fi

# Export all
export PATH
export CISST_ROOT

if [ "${OS}" == "Darwin" ]
then
    DYLD_LIBRARY_PATH=${LIBRARY_PATH}
    export DYLD_LIBRARY_PATH
else
    LD_LIBRARY_PATH=${LIBRARY_PATH}
    export LD_LIBRARY_PATH
fi

export PYTHONPATH
