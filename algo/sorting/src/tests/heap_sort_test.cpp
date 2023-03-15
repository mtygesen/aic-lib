#include "sort_test_template.hpp"
#include "../heap_sort.hpp"

int main() {
    HeapSort(intVector); // Test 1: int
    HeapSort(doubleVector); // Test 2: double
    HeapSort(stringVector); // Test 3: string
    HeapSort(charVector); // Test 4: char
    HeapSort(boolVector); // Test 5: bool
    HeapSort(intVector2); // Test 6: empty vector

    SortAssert(); // Run asserts
}