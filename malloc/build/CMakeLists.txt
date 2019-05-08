cmake_minimum_required(VERSION 2.8.9)
project (add)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY .)
set(SRC_DIR ../src)
file(GLOB ALL_CPP_FILES "${SRC_DIR}/*.cpp")

set(CMAKE_SYSTEM_NAME Linux)

set(CMAKE_CXX_FLAGS "")

set(CMAKE_C_COMPILER emcc)
set(CMAKE_CXX_COMPILER em++)
set(CMAKE_C_FLAGS emrun)
set(CMAKE_CXX_STANDARD 14)

add_executable(index.html ${ALL_CPP_FILES})