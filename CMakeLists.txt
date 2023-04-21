cmake_minimum_required(VERSION 3.0.0)
project(algo VERSION 0.1.0)

include(CTest)
enable_testing()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

add_subdirectory(aic/searching/src/tests)
add_subdirectory(aic/sorting/src/tests)

set (CMAKE_CXX_STANDARD 23)
add_compile_options(-Wall -Wextra -Wpedantic -Werror -Wc++17-extensions)
