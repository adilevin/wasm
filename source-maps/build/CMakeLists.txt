cmake_minimum_required(VERSION 2.8.9)
project (add)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY .)
set(SRC_DIR ../src)
file(GLOB ALL_CPP_FILES "${SRC_DIR}/*.cpp")

set(CMAKE_SYSTEM_NAME Linux)

set(CMAKE_CXX_FLAGS "-g4 -s EXPORTED_FUNCTIONS='[\"_algorithm_with_bug\"]' -s EXTRA_EXPORTED_RUNTIME_METHODS='[\"ccall\", \"cwrap\"]'")
set(CMAKE_CXX_COMPILER em++)

add_executable(index.js ${ALL_CPP_FILES})

file(MAKE_DIRECTORY ../target/src/)

file(COPY ${SRC_DIR}/index.html DESTINATION ../target/) # This enables to serve index.html from the target folder
file(COPY ${SRC_DIR} DESTINATION ../target/src/) # This enables the browser to locate the .cpp files using source-maps