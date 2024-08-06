cmake_minimum_required(VERSION 3.21)

project(rust-cffi-by-cmake-demo LANGUAGES CXX)

include(cmake/options.cmake)
include(cmake/helper.cmake)

add_subdirectory(lib)
