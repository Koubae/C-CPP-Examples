cmake_minimum_required(VERSION 3.29)
project(C_CPP_Examples)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_BUILD_TYPE Debug)

### ----------------------------------------------------------------
#                           CLion Run Configurations
### ----------------------------------------------------------------
# 1) Simple
add_executable(HELLO_WORLD c++/1_simple/hello_world.cpp)

# 2) Networking
add_executable(1_HTTP_REQUEST c++/2_networking/1_http_request.cpp)
# ==================================================================


### ----------------------------------------------------------------
#                           DEPENDENCIES
### ----------------------------------------------------------------
include(FetchContent)

# https://github.com/libcpr/example-cmake-fetch-content/blob/d99dfed29be9e1e3e9100b5b5abd714f701f7fbe/CMakeLists.txt#L25-L28
if (WIN32) # Install dlls in the same directory as the executable on Windows
    set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
endif ()


FetchContent_Declare(cpr GIT_REPOSITORY https://github.com/libcpr/cpr.git GIT_TAG 1.10.5)
FetchContent_MakeAvailable(cpr)

FetchContent_Declare(nlohmann_json GIT_REPOSITORY https://github.com/nlohmann/json.git GIT_TAG v3.11.3)
FetchContent_MakeAvailable(nlohmann_json)


target_link_libraries(1_HTTP_REQUEST PRIVATE cpr::cpr)
target_link_libraries(1_HTTP_REQUEST PRIVATE nlohmann_json::nlohmann_json)

# credit: https://stackoverflow.com/a/40599991/13903942
# can't this be done ... better?
#add_custom_command(
#        TARGET 1_HTTP_REQUEST POST_BUILD                # Adds a post-build event to uselib
#        COMMAND ${CMAKE_COMMAND} -E copy_if_different   # which executes "cmake - E copy_if_different..."
#        "${PROJECT_SOURCE_DIR}/libs/liblibrary.dll"     # this is in-file
#        $<TARGET_FILE_DIR:uselib>                       # this is out-file path
#)

# ==================================================================