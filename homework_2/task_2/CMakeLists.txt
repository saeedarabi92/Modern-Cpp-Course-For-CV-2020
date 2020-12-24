# /**********************************
#  * @ Author: Saeed Arabi
#  * @ Create Time: 2020-12-23 13:36:30
#  * @ Email: arabi@iastate.edu
#  **********************************/

cmake_minimum_required(VERSION 3.19)
project(Task_2)
add_executable(task_2 task_2.cpp)
# llvm and clang-tidy should be installed to be able to run the next two following commands:
# include(cmake/ClangFormat.cmake)
# include(cmake/StaticAnalyzers.cmake)
install(TARGETS task_2 DESTINATION ${PROJECT_SOURCE_DIR}/bin)
