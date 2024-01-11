# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\crioGui3_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\crioGui3_autogen.dir\\ParseCache.txt"
  "crioGui3_autogen"
  )
endif()
