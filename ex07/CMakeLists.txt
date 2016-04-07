set(v1 value)
set(v2 "val2")
set(v3 false)
set(v4 0)

if (v1)
    message(STATUS "1.v1: ${v1}")
endif (v1)

if (v1 STREQUAL "value")
    message(STATUS "2.v1: ${v1}")
endif (v1 STREQUAL "value")

if (v2)
    message(STATUS "3.v2: ${v2}")
endif (v2)

if (v2 STREQUAL "val2")
    message(STATUS "4.v2: ${v2}")
endif (v2 STREQUAL "val2")

if (v3)
    message(STATUS "5.v3: ${v3}")
endif (v3)

if (v3 STREQUAL false)
    message(STATUS "6.v3: ${v3}")
endif (v3 STREQUAL false)

if (v4)
    message(STATUS "7.v4: ${v4}")
endif (v4)

