#ifndef selection_sort
#define selection_sort

#include <vector>
#include "swap.hpp"

template <class T> void SelectionSort(std::vector<T>& v) {
    for (int i = 0; i < v.size() - 1; ++i) {
        auto min = i;

        for (int j = i + 1; j < v.size(); ++j) {
            if (v[j] < v[min]) {
                min = j;
            }
        }

        if (min != i) {
            Swap(&v[min], &v[i]);
        }
    }
}

#endif