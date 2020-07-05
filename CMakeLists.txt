cmake_minimum_required(VERSION 3.15)
project(algorithm)

set(CMAKE_CXX_STANDARD 11)
include_directories(
        inc/LIST.hpp
        inc/Sort.hpp
        inc/MStack.hpp
        inc/DynamicPlan.hpp
        inc/haspMap.hpp
        inc/m_string.hpp
        inc/Find_algorithm.hpp
        inc/stock.hpp
        inc/priority_queue.hpp)

add_library(
        code_lib

        STATIC
        src/LIST.cpp
        src/Sort.cpp
        src/MStack.cpp
        src/DynamicPlan.cpp
        src/haspMap.cpp
        src/m_string.cpp src/Find_algorithm.cpp src/Tree.cpp inc/Tree.hpp src/stock.cpp src/map_search.cpp inc/map_search.hpp
        src/priority_queue.cpp)

add_executable(code main.cpp )
target_link_libraries(code code_lib)