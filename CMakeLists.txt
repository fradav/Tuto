cmake_minimum_required(VERSION 3.0.0)
project(tuto VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(tuto main.cpp)

find_package(Boost REQUIRED COMPONENTS unit_test_framework)
include_directories(Boost::boost)
add_executable(tutotest test.cpp)
target_link_libraries(tutotest Boost::unit_test_framework Boost::dynamic_linking Boost::diagnostic_definitions)
add_test(Test tutotest) 