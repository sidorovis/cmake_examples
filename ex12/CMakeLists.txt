cmake_minimum_required(VERSION 3.3)

set( Boost_USE_STATIC_LIBS OFF )
set( Boost_USE_MULTITHREADED ON )

find_package( Boost 1.57 REQUIRED QUIET COMPONENTS
    filesystem
    system
)

message(STATUS " -> ${Boost_LIBRARIES}")

add_executable(ex12 main.cpp)
target_link_libraries(ex12 ${Boost_LIBRARIES})
