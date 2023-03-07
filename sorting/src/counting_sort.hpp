#ifndef aic_counting_sort
#define aic_counting_sort

#include <algorithm>
#include <vector>

/**
 * @brief Counting sort algorithm for sorting in linear time.
 * 
 * @tparam T type of elements in vector
 * @param v vector to be sorted
 */
template <class T> inline void CountingSort(std::vector<T>& v) {
    int k = std::max_element(v.begin(), v.end()) - std::min_element(v.begin(), v.end()) + 1;

    std::vector<int> c(k);
    std::vector<T> b(v.size());

    for (int j = 0; j < v.size(); ++j) {
        int x = v[j];
        ++c[x];
    }

    for (int i = 0; i < k; ++i) c[i] += c[i - 1];

    for (int j = v.size(); j > 0; --j) {
        b[c[j]] = j;
        --c[j];
    }

    v = b;
}

#endif