cmake_minimum_required(VERSION 3.19)
project(simple_arithmetic)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${PROJECT_SOURCE_DIR}/include/ipb_arithmetic)
add_subdirectory(src)

