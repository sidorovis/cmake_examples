add_library(mymath_library OBJECT mymath.cpp)
add_executable(ex04 myapp.cpp $<TARGET_OBJECTS:mymath_library>)

