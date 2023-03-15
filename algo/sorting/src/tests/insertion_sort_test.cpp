#include "sort_test_template.hpp"
#include "../insertion_sort.hpp"

int main() {
    InsertionSort(intVector); // Test 1: int
    InsertionSort(doubleVector); // Test 2: double
    InsertionSort(stringVector); // Test 3: string
    InsertionSort(charVector); // Test 4: char
    InsertionSort(boolVector); // Test 5: bool
    InsertionSort(intVector2); // Test 6: empty vector

    SortAssert(); // Run asserts
}