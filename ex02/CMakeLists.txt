add_library(mymath_library STATIC mymath.cpp)
add_executable(ex02 myapp.cpp)
target_link_libraries(ex02 mymath_library)

