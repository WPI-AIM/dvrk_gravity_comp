set(file "/home/davincic2/catkin_ws/build_release/cisst_netlib/cisstNetlibLapack/src/lapack-3.5.0.tgz")
message(STATUS "verifying file...
     file='${file}'")
set(expect_value "b1d3e3e425b2e44a06760ff173104bdf")
file(MD5 "${file}" actual_value)
if("${actual_value}" STREQUAL "${expect_value}")
  message(STATUS "verifying file... done")
else()
  message(FATAL_ERROR "error: MD5 hash of
  ${file}
does not match expected value
  expected: ${expect_value}
    actual: ${actual_value}
")
endif()
