#pragma once

#include <stdio.h>

#include "defines.h"

#ifdef __cplusplus
extern "C" {
#endif

FOO_API void testcall(float value) { printf("Hello world from C! Value passed: %f\n", value); };

#ifdef __cplusplus
};
#endif
