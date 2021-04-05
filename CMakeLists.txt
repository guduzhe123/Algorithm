cmake_minimum_required(VERSION 3.15)
project(algorithm)

set(CMAKE_CXX_STANDARD 11)
include_directories(
        inc
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
        src/m_string.cpp src/Find_algorithm.cpp
        src/BT/Tree.cpp
        src/stock.cpp
        src/map_search.cpp
        inc/map_search.hpp
        src/priority_queue.cpp)

add_executable(code main.cpp )
target_link_libraries(code code_lib)

add_executable(tree_node src/BT/FindPath/path.cpp inc/BT/FindPath/path.hpp)

add_executable(createBT src/BT/creatBT/createBT.cpp inc/BT/createBT/createBT.hpp)

add_executable(commonAncestor src/BT/lowestCommonAncestor/lowestCommonAncestor.cpp
        inc/BT/lowestCommonAncestor/lowestCommonAncestor.hpp)

add_executable(InsertTree src/BT/InsertTree/InsertTree.cpp
        inc/BT/InsertTree/InsertTree.hpp)

add_executable(partition src/BackStep/partition/partition.cpp
        inc/BackStep/partition.hpp)

add_executable(restorIP src/BackStep/restoreIpAddresses/restoreIpAddresses.cpp
        inc/BackStep/restoreIpAddresses.hpp)

add_executable(findSubsequences src/BackStep/findSubsequences/findSubsequences.cpp
        inc/BackStep/findSubsequences.hpp)

add_executable(permute src/BackStep/permute/permute.cpp
        inc/BackStep/permute.hpp)

