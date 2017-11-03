#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "blas" for configuration "Debug"
set_property(TARGET blas APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(blas PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "Fortran"
  IMPORTED_LINK_INTERFACE_LIBRARIES_DEBUG "m"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libblas.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS blas )
list(APPEND _IMPORT_CHECK_FILES_FOR_blas "${_IMPORT_PREFIX}/lib/libblas.a" )

# Import target "lapack" for configuration "Debug"
set_property(TARGET lapack APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(lapack PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "Fortran"
  IMPORTED_LINK_INTERFACE_LIBRARIES_DEBUG "blas"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/liblapack.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS lapack )
list(APPEND _IMPORT_CHECK_FILES_FOR_lapack "${_IMPORT_PREFIX}/lib/liblapack.a" )

# Import target "tmglib" for configuration "Debug"
set_property(TARGET tmglib APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(tmglib PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "Fortran"
  IMPORTED_LINK_INTERFACE_LIBRARIES_DEBUG "lapack"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libtmglib.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS tmglib )
list(APPEND _IMPORT_CHECK_FILES_FOR_tmglib "${_IMPORT_PREFIX}/lib/libtmglib.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
