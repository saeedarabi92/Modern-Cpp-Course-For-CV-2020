# /**********************************
#  * @ Author: Saeed Arabi
#  * @ Create Time: 2020-12-22 14:24:46
#  * @ Email: arabi@iastate.edu
#  **********************************/

cmake_minimum_required(VERSION 3.19)
project(Task_1)
add_executable(task_1 task_1.cpp)
# llvm and clang-tidy should be installed to be able to run the next two following commands:
# include(cmake/ClangFormat.cmake)
# include(cmake/StaticAnalyzers.cmake)
install(TARGETS task_1 DESTINATION ${PROJECT_SOURCE_DIR}/bin)
