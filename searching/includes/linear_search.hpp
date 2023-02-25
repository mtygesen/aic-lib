#ifndef aic_linear_search
#define aic_linear_search

#include <vector>

/**
 * @brief Linear search algorithm
 * @tparam T Type of element to find
 * @param v Vector of elements
 * @param key Element to search
 * @return Index of element or -1 if no element is found
 */
template <class T> inline T LinearSearch(const std::vector<T>& v, T key) {
	for (int i = 0; i < v.size(); ++i) {
		if (v[i] == key) return i;
	}
	
	return -1;
}

#endif