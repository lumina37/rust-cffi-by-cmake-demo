#pragma once

#include "cmake.h"

#ifdef FOO_BUILD_SHARED_LIBS
#    ifdef _MSC_VER
#        ifdef _FOO_BUILD_LIBS
#            define FOO_API __declspec(dllexport)
#        else
#            define FOO_API __declspec(dllimport)
#        endif
#    else
#        ifdef _FOO_BUILD_LIBS
#            define FOO_API __attribute__((visibility("default")))
#        else
#            define FOO_API
#        endif
#    endif
#else
#    define FOO_API
#endif
