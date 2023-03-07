#include "sort_test_template.hpp"
#include "../counting_sort.hpp"

int main() {
    CountingSort(intVector); // Test 1: int
    CountingSort(doubleVector); // Test 2: double
    CountingSort(stringVector); // Test 3: string
    CountingSort(charVector); // Test 4: char
    CountingSort(boolVector); // Test 5: bool
    CountingSort(intVector2); // Test 6: empty vector

    SortAssert(); // Run asserts
}