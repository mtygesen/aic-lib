#ifndef binary_search
#define binary_search

#include <vector>

/**
 * @brief Binary Search Algorithm
 * @tparam Type of element to find
 * @param v Vector of elements
 * @param a Element to search
 * @return Index of element or -1 if no element is found
 */
template <typename T> T binarySearch(std::vector<T>& v, T a) {
    int l = 0, r = v.size() - 1;

    while (l <= r) {
        int m = l + (r - 1) / 2;

        if (v[m] == a) return m;
        else if (v[m] < a) l = m + 1;
        else r = m - 1;
    }

    return -1;
}

#endif