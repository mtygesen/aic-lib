#include <iostream>
#include "searching.hpp"

int main() {
	std::vector<int> vec = {1, 53, 129, 42, 13, 82, 46};

	std::cout << linearSearch(vec, 129) << '\n';
	std::cout << binarySearch(vec, 129) << '\n';

	return 0;
}