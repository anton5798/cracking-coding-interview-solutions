cmake_minimum_required(VERSION 3.7)
project(cp2)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES
        main.cpp
        utils.cpp
        2_4.cpp
        2_5.cpp
        )

add_executable(cp2 ${SOURCE_FILES})