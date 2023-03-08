#ifndef aic_merge_sort
#define aic_merge_sort

#include <algorithm>
#include <vector>

/**
 * @brief Merge two sorted vectors
 * 
 * @tparam T Type of vector
 * @param v Permutates input vector
 * @param l Index of leftmost element
 * @param m Index of middle floor element
 * @param r Index of rightmost element
 */
template <class T> inline void Merge(std::vector<T>& v, int l, int m, int r) {
    int n1 = m - l + 1, n2 = r - m;
    std::vector<T> lVec(n1), rVec(n2);

    for (int i = 0; i < n1; ++i) lVec[i] = v[l + i];
    for (int j = 0; j < n2; ++j) rVec[j] = v[m + 1 + j]; 

    int x = 0, y = 0, z = l;

    while (x < n1 && y < n2) {
        if (lVec[x] <= rVec[y]) {
            v[z] = lVec[x];
            ++x;
        } 
        else {
            v[z] = rVec[y];
            ++y;
        }

        ++z;
    }

    while (x < n1) {
        v[z] = lVec[x];
        ++x, ++z;
    }

    while (y < n2) {
        v[z] = rVec[y];
        ++y, ++z;
    }
}

/**
 * @brief Merge sort algorithm
 * 
 * @tparam T Type of the vector
 * @param v Permutates input vector
 * @param l Index of leftmost element
 * @param r Index of rightmost element
 */
template <class T> inline void _MergeSort(std::vector<T>& v, int l, int r) {
    if (l < r) {
        int m = (l + r - 1) / 2;

        _MergeSort(v, l, m);
        _MergeSort(v, m + 1, r);

        Merge(v, l, m, r);
    }
}

/**
 * @brief Merge sort wrapper for easier calling
 * @tparam T Type of the vector
 * @param v Permutates input vector
 */
template <class T> inline void MergeSort(std::vector<T>& v) {
    if (v.size() < 2) return;
    _MergeSort(v, 0, v.size() - 1);
}

#endif