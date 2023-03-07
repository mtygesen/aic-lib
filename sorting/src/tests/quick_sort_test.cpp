#include "sort_test_template.hpp"
#include "../quick_sort.hpp"

int main() {
    QuickSort(intVector); // Test 1: int
    QuickSort(doubleVector); // Test 2: double
    QuickSort(stringVector); // Test 3: string
    QuickSort(charVector); // Test 4: char
    QuickSort(boolVector); // Test 5: bool
    QuickSort(intVector2); // Test 6: empty vector

    SortAssert(); // Run asserts
}