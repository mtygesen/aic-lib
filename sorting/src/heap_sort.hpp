#ifndef aic_heap_sort
#define aic_heap_sort

#include <algorithm>
#include <vector>

/**
 * @brief Max heapify algorithm
 * 
 * @tparam T type of the vector
 * @param v vector to be permutated
 * @param i index to heapify
 * @param heapSize size of the heap (default: v.size())
 */
template <class T> void MaxHeapify(std::vector<T>& v, int i, int heapSize = -1) {
    if (heapSize == -1) heapSize = v.size();

    int l = 2 * i + 1, r = 2 * i + 2;

    int largest = i;

    if (l < heapSize && v[l] > v[i]) largest = l; 
    if (r < heapSize && v[r] > v[largest]) largest = r;

    if (largest != i) {
        std::swap(v[i], v[largest]);
        MaxHeapify(v, largest);
    }
}

/**
 * @brief Build max heap algorithm
 * 
 * @tparam T type of the vector
 * @param v vector to be permutated
 */
template <class T> void BuildMaxHeap(std::vector<T>& v) {
    for (int i = v.size() / 2 - 1; i >= 0; --i) {
        MaxHeapify(v, i);
    }
}

/**
 * @brief Heap sort algorithm
 * 
 * @tparam T type of the vector
 * @param v vector to be permutated
 */
template <class T> void HeapSort(std::vector<T>& v) {
    BuildMaxHeap(v);

    for (int i = v.size() - 1; i >= 1; --i) {
        std::swap(v[0], v[i]);
        MaxHeapify(v, 0, i);
    }
}

#endif