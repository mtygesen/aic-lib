#ifndef aic_sentinel_search
#define aic_sentinel_search

#include <vector>

/**
 * @brief Sentinel Search Algorithm.
 * @tparam Type of element to find.
 * @param v Vector of elements.
 * @param key Element to search.
 * @return Index of element or -1 if no element is found.
 */
template <class T> inline int SentinelSearch(std::vector<T>& v, T key) {
    v.push_back(key);
    int i = 0;
    
    while (v[i] != key) ++i;

    if (i != v.size() - 1) return i;

    return -1;
}

#endif