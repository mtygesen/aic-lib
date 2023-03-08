#ifndef aic_counting_sort
#define aic_counting_sort

#include <algorithm>
#include <cmath>
#include <string>
#include <vector>

/**
 * @brief Counting sort algorithm for sorting in linear time.
 * 
 * @tparam T type of elements in vector
 * @param v vector to be sorted
 */
template <class T> inline void CountingSort(std::vector<T>& v) {
    static_assert(!std::is_same<T,std::string>::value,"std::string is not accepted");

    if (v.empty()) return;

    const auto [min, max] = std::minmax_element(v.begin(), v.end());

    int k = std::ceil(*max - *min + 1);

    std::vector<int> c(k);
    std::vector<T> b(v.size());

    for (int j = 0; j < v.size(); ++j) {
        int x = v[j + 1];
        ++c[x];
    }

    for (int i = 0; i < k; ++i) c[i] += c[i - 1];

    for (int j = v.size() - 1; j >= 0; --j) {
        b[c[v[j]]] = v[j];
        --c[v[j]];
    }

    v = b;
}

#endif