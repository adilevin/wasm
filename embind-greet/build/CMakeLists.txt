cmake_minimum_required(VERSION 2.8.9)
project (add)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY .)
set(SRC_DIR ../src)
file(GLOB ALL_CPP_FILES "${SRC_DIR}/*.cpp")

set(CMAKE_SYSTEM_NAME Linux)

set(CMAKE_CXX_FLAGS "--bind -Os -s INVOKE_RUN=0")
set(CMAKE_CXX_COMPILER em++)
set(CMAKE_CXX_STANDARD 14)

add_executable(index.js ${ALL_CPP_FILES})

file(COPY ${SRC_DIR}/index.html DESTINATION ../target/) # This enables to serve index.html from the target folder