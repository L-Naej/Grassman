CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
PROJECT(Grassman)
list( APPEND CMAKE_CXX_FLAGS "-std=c++0x -Wall ${CMAKE_CXX_FLAGS}")

INCLUDE_DIRECTORIES(eigen)
INCLUDE_DIRECTORIES(include)

file(GLOB_RECURSE SRC_FILES *.cpp *.hpp)

add_definitions(-Wall)

add_executable(grassman ${SRC_FILES})