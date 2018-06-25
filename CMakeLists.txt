cmake_minimum_required(VERSION 3.2)

project(hw1 VERSION 0.2.$ENV{TRAVIS_BUILD_NUMBER})
#$ENV{TRAVIS_BUILD_NUMBER}

find_package(GTest REQUIRED)
find_package (Threads REQUIRED)

include_directories(${GTEST_INCLUDE_DIRS})

configure_file(version.h.in version.h)

add_executable(hw1 main.cpp hello.cpp)

add_executable(hw1_test test_hw1.cpp hello.cpp)

set_target_properties(hw1 PROPERTIES
    CXX_STANDARD 14
    CXX_STANDARD_REQUIRED ON
    COMPILE_OPTIONS "-Wpedantic;-Wall;-Wextra;-Werror"
)

set_target_properties(hw1_test PROPERTIES
    INCLUDE_DIRECTORIES ${GTEST_INCLUDE_DIRS}
)

target_link_libraries(hw1_test ${GTEST_LIBRARIES} ${CMAKE_THREAD_LIBS_INIT})

install(TARGETS hw1 RUNTIME DESTINATION bin)

set(CPACK_GENERATOR DEB)

set(CPACK_PACKAGE_VERSION_MAJOR "${PROJECT_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${PROJECT_VERSION_MINOR}")
set(CPACK_PACKAGE_VERSION_PATCH "${PROJECT_VERSION_PATCH}")

set(CPACK_PACKAGE_CONTACT osmironov@gmail.com)

include(CPack)

enable_testing()

add_test(test hw1_test)
