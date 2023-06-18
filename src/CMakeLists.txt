set(libfoo_INCLUDE_DIRS "${PROJECT_SOURCE_DIR}/include")
set(libfoo_SRC_DIR "${PROJECT_SOURCE_DIR}/src/libfoo")
set(libfoo_SRCS "${libfoo_SRC_DIR}/bar.c")

if (BUILD_SHARED_LIBS)
    add_library(libfoo SHARED ${libfoo_SRCS})
    target_compile_definitions(libfoo PRIVATE "_FOO_EXPORTS")
else ()
    add_library(libfoo STATIC ${libfoo_SRCS})
endif ()

target_include_directories(libfoo PUBLIC ${libfoo_INCLUDE_DIRS})
target_compile_features(libfoo PUBLIC cxx_std_11)
install(TARGETS libfoo DESTINATION ".")
