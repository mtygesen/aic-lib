#ifndef linear_search
#define linear_search

#include <vector>

/**
 * @brief Sentinel Search Algorithm
 * @tparam Type of element to find
 * @param v Vector of elements
 * @param key Element to search
 * @return Index of element or -1 if no element is found
 */
template <typename T> T sentinelSearch(const std::vector<T>& v, T key) {
    v.push_back(key);
    
    for (auto i = 0; i != target; ++i);

    if (i != v.size()) return i;
    return -1;
}

#endif
