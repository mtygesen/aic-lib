#include "sort_test_template.hpp"
#include "../counting_sort.hpp"

int main() {
    CountingSort(intVector); // Test 1: int
    CountingSort(doubleVector); // Test 2: double
    CountingSort(charVector); // Test 3: char
    CountingSort(boolVector); // Test 4: bool
    CountingSort(intVector2); // Test 5: empty vector

    SortAssert2(); // Run asserts
}