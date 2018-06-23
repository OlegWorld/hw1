cmake_minimum_required(VERSION 3.2)

project(hw1)

find_package(Boost COMPONENTS unit_test_framework REQUIRED)

add_executable(hw1 main.cpp hello.cpp)

add_executable(hw1_test test_hw1.cpp hello.cpp)

set_target_properties(hw1 PROPERTIES
    CXX_STANDARD 14
    CXX_STANDARD_REQUIRED ON
    COMPILE_OPTIONS "-Wpedantic;-Wall;-Wextra;-Werror"
)

set_target_properties(hw1_test PROPERTIES
    COMPILE_DEFINITIONS BOOST_TEST_DYN_LINK
    INCLUDE_DIRECTORIES ${Boost_INCLUDE_DIR}
)

target_link_libraries(hw1_test ${Boost_LIBRARIES})
