message(STATUS "downloading...
     src='http://www.netlib.org/lapack/lapack-3.5.0.tgz'
     dst='/home/davincic2/catkin_ws/build_release/cisst_netlib/cisstNetlibLapack/src/lapack-3.5.0.tgz'
     timeout='none'")




file(DOWNLOAD
  "http://www.netlib.org/lapack/lapack-3.5.0.tgz"
  "/home/davincic2/catkin_ws/build_release/cisst_netlib/cisstNetlibLapack/src/lapack-3.5.0.tgz"
  SHOW_PROGRESS
  EXPECTED_HASH;MD5=b1d3e3e425b2e44a06760ff173104bdf
  # no TIMEOUT
  STATUS status
  LOG log)

list(GET status 0 status_code)
list(GET status 1 status_string)

if(NOT status_code EQUAL 0)
  message(FATAL_ERROR "error: downloading 'http://www.netlib.org/lapack/lapack-3.5.0.tgz' failed
  status_code: ${status_code}
  status_string: ${status_string}
  log: ${log}
")
endif()

message(STATUS "downloading... done")
