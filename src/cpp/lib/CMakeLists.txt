if (FOO_BUILD_SHARED_LIBS)
    set(FOO_LIB_TYPE "SHARED")
    set(FOO_LIB_COMPILE_DEFS "_FOO_BUILD_LIBS")
else ()
    set(FOO_LIB_TYPE "STATIC")
endif ()
set(FOO_LIB_DEP_SCOPE "PUBLIC")

set(FOO_LIB_SRCS "lib.cpp")

set(FOO_LIB_NAME foo)
add_library(${FOO_LIB_NAME} ${FOO_LIB_TYPE} ${FOO_LIB_SRCS})
target_compile_features(${FOO_LIB_NAME} ${FOO_LIB_DEP_SCOPE} cxx_std_20)
target_compile_definitions(${FOO_LIB_NAME} PRIVATE ${FOO_LIB_COMPILE_DEFS})
target_include_directories(${FOO_LIB_NAME} ${FOO_LIB_DEP_SCOPE}
        "${PROJECT_SOURCE_DIR}/include"
)

install(TARGETS ${FOO_LIB_NAME} DESTINATION ".")
