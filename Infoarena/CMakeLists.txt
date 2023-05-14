cmake_minimum_required(VERSION 3.23)
project(Infoarena)

set(CMAKE_CXX_STANDARD 14)

set(BUILD_1 main)
set(SOURCE_FILES_1 Infoarena/FOR_WORK_PRIVATE/main.cpp)

add_executable(${BUILD_1} ${SOURCE_FILES_1})

