cmake_minimum_required(VERSION 3.20)

project(JobSystem)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(${PROJECT_NAME} main.cpp Jobby.h Jobby.cpp)