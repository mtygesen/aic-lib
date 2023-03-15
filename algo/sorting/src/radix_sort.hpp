#ifndef aic_radix_sort_hpp
#define aic_radix_sort_hpp

#include "counting_sort.hpp"

/**
 * @brief Radix Sort using counting sort
 * 
 * @tparam T 
 * @param v 
 */
template <class T> inline void RadixSort(std::vector<std::vector<T>>& v) {
    for (int i = 0; i < v.size(); ++i) CountingSort(v[i]);
}

#endif