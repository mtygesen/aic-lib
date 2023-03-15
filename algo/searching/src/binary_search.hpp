#ifndef aic_binary_search
#define aic_binary_search

#include <vector>

/**
 * @brief Binary search algorithm.
 * @tparam Type of element to find.
 * @param v Vector of elements.
 * @param key Element to search.
 * @return Index of element or -1 if no element is found.
 */
template <class T> inline int BinarySearch(const std::vector<T>& v, T key) {
    int l = 0, r = v.size() - 1;

    while (l <= r) {
        int m = (l + r) / 2;

        if (v[m] == key) return m;
        else if (v[m] < key) l = m + 1;
        else r = m - 1;
    }

    return -1;
}

#endif