cmake_minimum_required(VERSION 3.29)
project(
        CMakeSubProjectTest
        DESCRIPTION "Example of a sub project that is within another larger project"
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# By default, many compilers allow non-standard compiler extensions (e.g., GNU extensions).
# Setting CMAKE_CXX_EXTENSIONS to OFF ensures that only standard C++20 features are allowed.
#set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(CMakeSubProjectTest subProject.cpp)
