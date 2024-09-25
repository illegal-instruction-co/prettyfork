cmake_minimum_required(VERSION 3.12)

project(prettyfork)

set(CMAKE_CXX_STANDARD 20)

include_directories(
    include
    internal/include
)

add_subdirectory(example)
add_subdirectory(internal)
add_subdirectory(src)
add_subdirectory(test)
