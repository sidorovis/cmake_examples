project(mymath_library)
add_library(mymath_library STATIC mymath.cpp)

project(ex02)
add_executable(ex02 myapp.cpp)
target_link_libraries(ex02 mymath_library)

