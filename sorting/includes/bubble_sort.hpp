#ifndef aic_bubble_sort
#define aic_bubble_sort

#include <vector>
#include <algorithm>

template <class T> void BubbleSort(std::vector<T>& v) {
    bool flag;

    for (int i = 1; i < v.size(); ++i) {

        flag = false;

        for (int j = 0; j < v.size() - i; ++j) {
            if (v[j] > v[j + 1]) {
                std::swap(v[j], v[j + 1]);
                flag = true;
            }
        }
        
        if (!flag) break;
    }
}

#endif