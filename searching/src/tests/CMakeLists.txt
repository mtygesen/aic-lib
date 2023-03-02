add_test(NAME binary_search COMMAND binary_search)
add_test(NAME linear_search COMMAND linear_search)
add_test(NAME sentinel_search COMMAND sentinel_search)

add_executable(binary_search binary_search_test.cpp)
add_executable(linear_search linear_search_test.cpp)
add_executable(sentinel_search sentinel_search_test.cpp)