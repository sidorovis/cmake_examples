add_library(mymath_library SHARED mymath.cpp)
add_executable(ex03 myapp.cpp)
target_link_libraries(ex03 mymath_library)

