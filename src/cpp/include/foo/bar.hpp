#pragma once

#include <iostream>

#include "defines.h"

#ifdef __cplusplus
extern "C" {
#endif

FOO_API void testcall(float value) { std::cout << "Hello world from C++! Value passed: " << value << std::endl; };

#ifdef __cplusplus
};
#endif
