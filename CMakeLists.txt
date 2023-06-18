cmake_minimum_required(VERSION 3.1)

project(hello-rust LANGUAGES C)

option(BUILD_SHARED_LIBS "Specifies the type of libraries (SHARED or STATIC) to build" OFF)

set(FOO_BUILD_SHARED_LIBS ${BUILD_SHARED_LIBS})

set(libfoo_CONFIG_DIR "${PROJECT_SOURCE_DIR}/include/libfoo")
configure_file("${libfoo_CONFIG_DIR}/cmake.h.in" "${libfoo_CONFIG_DIR}/cmake.h")

add_subdirectory(src)
