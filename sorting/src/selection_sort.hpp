#ifndef aic_selection_sort
#define aic_selection_sort

#include <vector>
#include <algorithm>

/**
 * @brief Selection sort algorithm
 * @tparam T Type of the vector
 * @param v Permutates input vector
 */
template <class T> inline void SelectionSort(std::vector<T>& v) {
    for (int i = 0; i < v.size(); ++i) {
        int min = i;

        for (int j = i + 1; j < v.size(); ++j) {
            if (v[j] < v[min]) {
                min = j;
            }
        }

        if (min != i) {
            std::swap(v[min], v[i]);
        }
    }
}

#endif
