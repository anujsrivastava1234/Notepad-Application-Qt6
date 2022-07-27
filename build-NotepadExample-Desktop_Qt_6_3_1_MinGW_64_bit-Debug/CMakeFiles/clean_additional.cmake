# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\NotepadExample_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\NotepadExample_autogen.dir\\ParseCache.txt"
  "NotepadExample_autogen"
  )
endif()
