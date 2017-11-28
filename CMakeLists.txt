cmake_minimum_required(VERSION 3.1)
project(neo-cpp-sdk)

set(CMAKE_VERBOSE_MAKEFILE ON)

set(JSON_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/libs/json/src)
set(JSON_INCLUDE_DIR ${JSON_INCLUDE_DIR} PARENT_SCOPE)
set(DERIVEJSON_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/libs/derivejson/include)
set(DERIVEJSON_INCLUDE_DIR ${DERIVEJSON_INCLUDE_DIR} PARENT_SCOPE)
set(PREPROCESSOR_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/libs/preprocessor/include)
set(PREPROCESSOR_INCLUDE_DIR ${PREPROCESSOR_INCLUDE_DIR} PARENT_SCOPE)
set(NEO_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)
set(NEO_INCLUDE_DIR ${NEO_INCLUDE_DIR} PARENT_SCOPE)

set(BUILD_CPR_TESTS OFF CACHE BOOL "Don't build cpr tests")
set(BUILD_FP_EXEC OFF CACHE BOOL "Don't build fp exec")
set(BUILD_FP_TESTS OFF CACHE BOOL "Don't build fp tests")
set(BUILD_DERIVEJSON_EXEC OFF CACHE BOOL "Don't build derivejson exec")
set(BUILD_DERIVEJSON_TESTS OFF CACHE BOOL "Don't build derivejson tests")

if(WIN32)
    option(CMAKE_USE_OPENSSL "Use OpenSSL code. Experimental" OFF)
endif()

find_package(CURL)
if(CURL_FOUND)
    set(USE_SYSTEM_CURL ON CACHE BOOL "Use the system curl for faster builds")
endif()
add_subdirectory(libs/cpr)

add_subdirectory(libs/fp)
set(FP_INCLUDE_DIR ${FP_INCLUDE_DIR} PARENT_SCOPE)

include_directories(
  ${JSON_INCLUDE_DIR}
  ${FP_INCLUDE_DIR}
  ${PREPROCESSOR_INCLUDE_DIR}
  ${DERIVEJSON_INCLUDE_DIR}
  ${NEO_INCLUDE_DIR}
  )

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++14")
add_executable(neo_example example/example.cc)
target_link_libraries(neo_example ${CPR_LIBRARIES})
