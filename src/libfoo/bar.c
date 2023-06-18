#include <stdio.h>

#include "libfoo/bar.h"

#ifdef __cplusplus
extern "C" {
#endif

void testcall(float value)
{
    printf("Hello world from C! Value passed: %f\n",value);
}

#ifdef __cplusplus
};
#endif