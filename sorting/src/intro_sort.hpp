#ifndef aic_intro_sort
#define aic_intro_sort

#include <cmath>

#include "heap_sort.hpp"
#include "insertion_sort.hpp"
#include "quick_sort.hpp"

/**
 * @brief Intro sort algorithm.
 * 
 * @tparam T type of the vector.
 * @param v vector to be sorted.
 * @param maxDepth maximum depth of recursion.
 */
template <class T> inline void _IntroSort(std::vector<T>& v, int maxDepth) {
    int n = v.size();

    if (n < 16) InsertionSort(v);
    else if (!maxDepth) HeapSort(v);
    else int pi = Partition(v, 0, n - 1); 
}


/**
 * @brief Intro sort wrapper for easier calling.
 * 
 * @tparam T type of the vector.
 * @param v vector to be sorted.
 */
template <class T> inline void IntroSort(std::vector<T>& v) {
    int maxDepth = log2(v.size()) * 2;
    _IntroSort(v, maxDepth);
}

#endif