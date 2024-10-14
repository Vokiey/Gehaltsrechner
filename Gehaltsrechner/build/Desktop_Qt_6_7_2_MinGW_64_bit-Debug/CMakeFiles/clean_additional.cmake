# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Gehaltsrechner_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Gehaltsrechner_autogen.dir\\ParseCache.txt"
  "Gehaltsrechner_autogen"
  )
endif()
