cmake_minimum_required(VERSION 3.10)
project(Nox)

set(CMAKE_CXX_STANDARD 17)

add_executable(Nox main.cc include/common.h include/platform.h)