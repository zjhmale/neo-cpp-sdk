cmake_minimum_required(VERSION 3.1)
project(neo-cpp-sdk)

set(CMAKE_VERBOSE_MAKEFILE ON)

set(JSON_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/libs/json/src)
set(JSON_INCLUDE_DIR ${JSON_INCLUDE_DIR} PARENT_SCOPE)
set(NEO_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)
set(NEO_INCLUDE_DIR ${NEO_INCLUDE_DIR} PARENT_SCOPE)

set(BUILD_FP_EXEC OFF CACHE BOOL "Set to ON to build fp exec.")
set(BUILD_FP_TESTS OFF CACHE BOOL "Set to ON to build fp tests.")

add_subdirectory(libs/fp)
set(FP_INCLUDE_DIR ${FP_INCLUDE_DIR} PARENT_SCOPE)

include_directories(
  ${JSON_INCLUDE_DIR}
  ${NEO_INCLUDE_DIR}
  ${FP_INCLUDE_DIR}
  )

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++14")
add_executable(neo_example example/example.cc)
