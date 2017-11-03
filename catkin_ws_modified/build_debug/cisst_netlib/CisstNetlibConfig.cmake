#
# $Id$
#
# Author(s):  Anton Deguet
# Created on: 2012-12-09
#
# (C) Copyright 2012-2013 Johns Hopkins University (JHU), All Rights
# Reserved.
#
# Provide cisstNetlibConfig.cmake, defines includes and libraries
#
# This module defines
# cisstNetlib_INCLUDE_DIR, where to find headers
# cisstNetlib_LIBRARIES, the libraries to link against to use isi_api.
# cisstNetlib_FOUND, If false, do not try to use isi_api.
#
# Capitalized version of variables is provided for backward compatibility (CISSTNETLIB_xyz)

# This file is assumed to be used when installed with the libraries
# and will only work when maintained relative to the rest of the tree

# retrieve the path where isi api was installed
set (cisstNetlib_CONFIG_FILE ${CMAKE_CURRENT_LIST_FILE})
get_filename_component (cisstNetlib_CONFIG_FILE_DIR
                        ${cisstNetlib_CONFIG_FILE}
                        PATH)

# find include directory
find_path (cisstNetlib_INCLUDE_DIR
           NAMES cisstNetlib.h
           PATHS "${cisstNetlib_CONFIG_FILE_DIR}/../include"
)

# find all libraries
set (cisstNetlib_LIBRARIES_SHORT_NAMES
     "cisstNetlib;cisstNetlib_hanson_haskell;cisstNetlib_lawson_hanson;cisstNetlib_lapack;cisstNetlib_blas;cisstNetlib_gfortran;cisstNetlib_quadmath;cisstNetlib_gcc")

mark_as_advanced (cisstNetlib_LIBRARIES_SHORT_NAMES)

foreach (lib ${cisstNetlib_LIBRARIES_SHORT_NAMES})
  find_library (cisstNetlib_LIBRARY_${lib} ${lib}
                PATHS "${cisstNetlib_CONFIG_FILE_DIR}/../lib")
  mark_as_advanced (cisstNetlib_LIBRARY_${lib})
endforeach (lib ${cisstNetlib_LIBRARIES_SHORT_NAMES})

# make sure all libraries are found
set (cisstNetlib_FOUND OFF)
if (cisstNetlib_INCLUDE_DIR)
  set (cisstNetlib_FOUND ON)
  foreach (lib ${cisstNetlib_LIBRARIES_SHORT_NAMES})
  if (NOT cisstNetlib_LIBRARY_${lib})
    set (cisstNetlib_FOUND OFF)
    endif (NOT cisstNetlib_LIBRARY_${lib})
  endforeach (lib ${cisstNetlib_LIBRARIES_SHORT_NAMES})
endif (cisstNetlib_INCLUDE_DIR)

# compile list and set all variables
if (cisstNetlib_FOUND)
  unset (cisstNetlib_LIBRARIES)
  foreach (lib ${cisstNetlib_LIBRARIES_SHORT_NAMES})
    set (cisstNetlib_LIBRARIES ${cisstNetlib_LIBRARIES} ${cisstNetlib_LIBRARY_${lib}})
  endforeach (lib ${cisstNetlib_LIBRARIES_SHORT_NAMES})
endif (cisstNetlib_FOUND)

# backward compatibility
set (CISSTNETLIB_FOUND ${cisstNetlib_FOUND})
set (CISSTNETLIB_INCLUDE_DIR ${cisstNetlib_INCLUDE_DIR})
set (CISSTNETLIB_LIBRARIES ${cisstNetlib_LIBRARIES})
