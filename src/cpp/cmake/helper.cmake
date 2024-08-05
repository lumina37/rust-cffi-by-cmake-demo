set(CM_CONFIGURE_DIR "${PROJECT_SOURCE_DIR}/src/cpp/include/foo")
configure_file("${CM_CONFIGURE_DIR}/cmake.h.in" "${CM_CONFIGURE_DIR}/cmake.h" @ONLY)
