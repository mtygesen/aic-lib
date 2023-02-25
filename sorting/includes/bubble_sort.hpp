#ifndef aic_bubble_sort
#define aic_bubble_sort

#include <vector>
#include <algorithm>

/**
 * @brief Bubble sort algorithm
 * @tparam T Type of the vector
 * @param v Permutates input vector
 */
template <class T> inline void BubbleSort(std::vector<T>& v) {
    for (int i = 1; i < v.size(); ++i) {

        bool flag = false;

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
