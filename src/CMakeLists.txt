cmake_minimum_required(VERSION 3.7)
project(CTCI)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(cp2)
add_subdirectory(cp3)
add_executable(CTCI main.cpp)
target_link_libraries(CTCI cp2 cp3)
