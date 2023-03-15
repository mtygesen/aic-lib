#ifndef aic_quick_sort
#define aic_quick_sort

#include <algorithm>
#include <vector>

/**
 * @brief Partition the vector v in place.
 * 
 * @tparam T type of the vector.
 * @param v vector to be partitioned.
 * @param l left-most index.
 * @param r right-most index.
 * 
 * @return index of the pivot.
 */
template <class T> inline int Partition(std::vector<T>& v, int l, int r) {
    int i = l - 1;

    for (int j = l; j <= r; ++j) {
        if (v[j] < v[r]) {
            ++i;
            std::swap(v[i], v[j]);
        }
    }

    std::swap(v[i + 1], v[r]);

    return i + 1;
}

/**
 * @brief Quick sort the vector v in place.
 * 
 * @tparam T type of the vector.
 * @param v vector to be sorted.
 * @param l left-most index.
 * @param r right-most index.
 */
template <class T> inline void _QuickSort(std::vector<T>& v, int l, int r) {
    if (l < r) {
        int pi = Partition(v, l, r);

        _QuickSort(v, l, pi - 1);
        _QuickSort(v, pi + 1, r);
    }
}

/**
 * @brief Quick sort wrapper for easier calling.
 * 
 * @tparam T type of the vector.
 * @param v vector to be sorted.
 */
template <class T> inline void QuickSort(std::vector<T>& v) {
    if (v.size() < 2) return;
    _QuickSort(v, 0, v.size() - 1);
}

#endif