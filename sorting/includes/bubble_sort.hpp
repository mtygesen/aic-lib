#ifndef bubble_sort
#define bubble_sort

#include <vector>
#include "swap.hpp"

template <class T> void BubbleSort(std::vector<T>& v) {
    bool flag;

    for (int i = 1; i < v.size() - i; ++i) {

        flag = false;

        for (int j = 0; j <= (n - i - 1); ++j) {
            if (v[j] > v[j + 1]) {
                Swap(&v[j], &v[j + 1]);
                flag = true;
            }
        }
        
        if (!flag) break;
    }
}

#endif