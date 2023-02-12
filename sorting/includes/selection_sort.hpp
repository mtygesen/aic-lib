#ifndef selection_sort
#define selection_sort

#include <vector>
#include "swap.hpp"

template <class T> void SelectionSort(std::vector<T>& v) {
    for (int i = 0; i < v.size() - 1; ++i) {
        auto min = i;

        for (int j = i + 1; j < v.size(); ++j) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }

        if (min != i) {
            Swap(&arr[min], &arr[i]);
        }
    }
}

#endif