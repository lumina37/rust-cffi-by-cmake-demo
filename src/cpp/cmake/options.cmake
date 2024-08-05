include(CMakeDependentOption)

cmake_dependent_option(FOO_BUILD_SHARED_LIBS "Specifies the type of libfoo to build" ON
        "BUILD_SHARED_LIBS" OFF)
