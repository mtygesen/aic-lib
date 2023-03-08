#ifndef aic_heap_sort
#define aic_heap_sort

#include <algorithm>
#include <vector>

/**
 * @brief Max-heapify algorithm
 * 
 * @tparam T type of the vector
 * @param v vector to be permutated
 * @param i index to heapify
 * @param n size of the heap
 */
template <class T> inline void MaxHeapify (std::vector<T>& v, int i, int n) {
    int l = 2 * i + 1, r = 2 * i + 2;

    int max = i;

    if (l < n && v[l] > v[max]) max = l; 
    if (r < n && v[r] > v[max]) max = r;

    if (max != i) {
        std::swap(v[i], v[max]);
        MaxHeapify(v, max, n);
    }
}

/**
 * @brief Build-max-heap algorithm
 * 
 * @tparam T type of the vector
 * @param v vector to be permutated
 */
template <class T> inline void BuildMaxHeap(std::vector<T>& v) {
    for (int i = v.size() / 2 - 1; i >= 0; --i) {
        MaxHeapify(v, i, v.size());
    }
}

/**
 * @brief Heap sort algorithm
 * 
 * @tparam T type of the vector
 * @param v vector to be permutated
 */
template <class T> inline void HeapSort(std::vector<T>& v) {
    if (v.size() < 2) return;

    BuildMaxHeap(v);

    for (int i = v.size() - 1; i >= 0; --i) {
        std::swap(v[0], v[i]);
        MaxHeapify(v, 0, i);
    }
}

#endif