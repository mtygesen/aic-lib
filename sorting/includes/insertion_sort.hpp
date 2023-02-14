#ifndef aic_insertion_sort
#define aic_insertion_sort

#include <vector>
#include <algorithm>

/**
 * @brief Insertion Sort Algorithm
 * @tparam T Type of the vector
 * @param v Permutates input vector
 */
template <class T> void InsertionSort(std::vector<T>& v) {
    for (int i = 1; i < v.size(); ++i) {
        for (int j = i - 1; j >= 0 && v[j] > v[j + 1]; --j) {
            std::swap(v[j], v[j + 1]);
        }
    }
}

#endif