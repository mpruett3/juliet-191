cmake_minimum_required(VERSION 3.0.0)

project(JulietHectorAll VERSION 0.1 LANGUAGES C CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

file(GLOB juliet_src
    "*.h"
    "*.c"
    "*.cpp")

add_executable(${PROJECT_NAME} ${juliet_src})
