#include "sort_test_template.hpp"
#include "../selection_sort.hpp"

int main() {
    SelectionSort(intVector); // Test 1: int
    SelectionSort(doubleVector); // Test 2: double
    SelectionSort(stringVector); // Test 3: string
    SelectionSort(charVector); // Test 4: char
    SelectionSort(boolVector); // Test 5: bool
    SelectionSort(intVector2); // Test 6: empty vector

    SortAssert(); // Run asserts
}