#pragma once

#include "libfoo/cmake.h"

#ifdef FOO_BUILD_SHARED_LIBS
#ifdef _WIN32
#ifdef _FOO_EXPORTS
#define FOO_EXPORT __declspec(dllexport)
#else
#define FOO_EXPORT __declspec(dllimport)
#endif
#else
#ifdef _FOO_EXPORTS
#define FOO_EXPORT __attribute__((visibility("default")))
#else
#define FOO_EXPORT
#endif
#endif
#else
#define FOO_EXPORT
#endif
