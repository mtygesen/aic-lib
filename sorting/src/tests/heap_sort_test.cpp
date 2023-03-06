//#include "sort_test_template.hpp"
#include "../heap_sort.hpp"

#include <iostream>
int main() {

    std::vector<int> intVector = {4, 17, 3, 12, 9, 6};
    HeapSort(intVector); // Test 1: int
    
    for (auto v : intVector) {
        std::cout << v << " ";
    }
}