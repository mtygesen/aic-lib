#ifndef linear_search
#define linear_search

#include <vector>

/**
 * @brief Linear Search Algorithm
 * @tparam Type of element to find
 * @param v Vector of elements
 * @param key Element to search
 * @return Index of element or -1 if no element is found
 */
template <typename T> T linearSearch(const std::vector<T>& v, T key) {
	for (int i = 0; i < v.size(); ++i) {
		if (v[i] == key) return i;
	}
	
	return -1;
}

#endif