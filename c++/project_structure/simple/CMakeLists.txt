cmake_minimum_required(VERSION 3.29)
project(
        simple
        DESCRIPTION "Simple C++ Project structure"
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE Debug)


add_executable(SIMPLE src/main.cpp
        src/logger/logger.hpp
        src/logger/logger.cpp
        src/inventory/inventory.cpp
        src/inventory/inventory.hpp
)