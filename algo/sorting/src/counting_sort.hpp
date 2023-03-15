#ifndef aic_counting_sort
#define aic_counting_sort

#include <algorithm>
#include <string>
#include <vector>

/**
 * @brief Counting sort algorithm for stable sorting in linear time. 
 * This function does not accept strings, and should not be used if the range of values is larger than the size of the vector.
 * 
 * @tparam T type of elements in vector.
 * @param v vector to be sorted.
 */
template <class T> inline void CountingSort(std::vector<T>& v) {
    if (v.size() < 2) return;

    static_assert(!std::is_same<T,std::string>::value,"std::string is not accepted");

    const auto [min, max] = std::minmax_element(v.begin(), v.end());

    int k = std::ceil(*max - *min + 1);

    if (k > v.size()) std::cerr << "K value is larger than the size of the vector. Counting sort is not suitable for this case.\n";

    std::vector<int> c(k);
    std::vector<T> b(v.size());

    for (int i = 0; i < v.size(); ++i) ++c[v[i] - *min];

    for (int i = 0; i < k; ++i) c[i] += c[i - 1];

    for (int i = v.size() - 1; i >= 0; --i) {
        b[c[v[i] - *min] - 1] = v[i];
        --c[v[i] - *min];
    }

    v = b;
}

#endif
