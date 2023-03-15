#include "sort_test_template.hpp"
#include "../merge_sort.hpp"

int main() {
    MergeSort(intVector); // Test 1: int
    MergeSort(doubleVector); // Test 2: double
    MergeSort(stringVector); // Test 3: string
    MergeSort(charVector); // Test 4: char
    MergeSort(boolVector); // Test 5: bool
    MergeSort(intVector2); // Test 6: empty vector

    SortAssert(); // Run asserts
}