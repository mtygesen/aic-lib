#ifndef aic_insertion_sort
#define aic_insertion_sort

#include <algorithm>
#include <vector>

/**
 * @brief Insertion sort algorithm
 * @tparam T Type of the vector
 * @param v Permutates input vector
 */
template <class T> inline void InsertionSort(std::vector<T>& v) {
    if (v.size() < 2) return;

    for (int i = 1; i < v.size(); ++i) {
        for (int j = i - 1; j >= 0 && v[j] > v[j + 1]; --j) {
            std::swap(v[j], v[j + 1]);
        }
    }
}

#endif
