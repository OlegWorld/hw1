cmake_minimum_required(VERSION 3.2)

project(hw1)

#aux_source_directory(. SRC_LIST)

add_executable(hw1 main.cpp hello.cpp)

set_target_properties(hw1 PROPERTIES
    CXX_STANDARD 14
    CXX_STANDARD_REQUIRED ON
    COMPILE_OPTIONS "-Wpedantic;-Wall;-Wextra;-Werror"
)
