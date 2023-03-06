#ifndef aic_heap_sort
#define aic_heap_sort

#include <algorithm>
#include <vector>

/**
 * @brief Min heapify algorithm
 * 
 * @tparam T type of the vector
 * @param v vector to be permutated
 * @param i index to heapify
 * @param n size of the heap
 */
template <class T> inline void MinHeapify (std::vector<T>& v, int i, int n) {
    int l = 2 * i + 1, r = 2 * i + 2;

    int smallest = i;

    if (l < n && v[l] < v[smallest]) smallest = l; 
    if (r < n && v[r] < v[smallest]) smallest = r;

    if (smallest != i) {
        std::swap(v[i], v[smallest]);
        MinHeapify(v, smallest, v.size());
    }
}

/**
 * @brief Build max heap algorithm
 * 
 * @tparam T type of the vector
 * @param v vector to be permutated
 * @param n size of the heap
 */
template <class T> inline void BuildMinHeap(std::vector<T>& v, int n) {
    for (int i = v.size() / 2 - 1; i >= 0; --i) {
        MinHeapify(v, i, n);
    }
}

/**
 * @brief Heap sort algorithm
 * 
 * @tparam T type of the vector
 * @param v vector to be permutated
 */
template <class T> inline void HeapSort(std::vector<T>& v) {
    BuildMinHeap(v, v.size());

    for (int i = v.size() - 1; i >= 0; --i) {
        std::swap(v[0], v[i]);
        MinHeapify(v, 0, i);
    }
}

#endif