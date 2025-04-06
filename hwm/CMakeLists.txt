cmake_minimum_required(VERSION 3.28)

project(HWM LANGUAGES CXX)

set(HWM_COMMON_CMAKE_UTILS ${CMAKE_SOURCE_DIR}/cmake)
include(${HWM_COMMON_CMAKE_UTILS}/config.cmake)
include(${HWM_COMMON_CMAKE_UTILS}/options.cmake)

set(HWM_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)
set(HWM_LIB_DIR ${CMAKE_SOURCE_DIR}/lib)

add_subdirectory(../third-party third-party)
add_subdirectory(lib)
