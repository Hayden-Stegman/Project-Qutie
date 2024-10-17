# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/Project-Qutie_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/Project-Qutie_autogen.dir/ParseCache.txt"
  "Project-Qutie_autogen"
  )
endif()
