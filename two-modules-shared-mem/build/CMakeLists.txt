cmake_minimum_required(VERSION 2.8.9)
project (add)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY .)
set(SRC_DIR ../src)

set(CMAKE_SYSTEM_NAME Linux)

set(CMAKE_CXX_FLAGS "-s MODULARIZE=1 -s EXTRA_EXPORTED_RUNTIME_METHODS='[\"ccall\", \"cwrap\"]'")
set(CMAKE_CXX_COMPILER em++)

add_executable(fill_array.js ${SRC_DIR}/fill_array.cpp)
set_target_properties(fill_array.js 
    PROPERTIES LINK_FLAGS "-s EXPORTED_FUNCTIONS='[\"_fill_array\"]' -s EXPORT_NAME='FILL_ARRAY_MODULE'"
    )

add_executable(calc_sum.js ${SRC_DIR}/calc_sum.cpp)
set_target_properties(calc_sum.js 
    PROPERTIES LINK_FLAGS "-s EXPORTED_FUNCTIONS='[\"_calc_sum\"]' -s EXPORT_NAME='CALC_SUM_MODULE'")

configure_file(${SRC_DIR}/index.html index.html COPYONLY)