#include "sort_test_template.hpp"
#include "../bubble_sort.hpp"

int main() {
    BubbleSort(intVector); // Test 1: int
    BubbleSort(doubleVector); // Test 2: double
    BubbleSort(stringVector); // Test 3: string
    BubbleSort(charVector); // Test 4: char
    BubbleSort(boolVector); // Test 5: bool
    BubbleSort(intVector2); // Test 6: empty vector

    SortAssert(); // Run asserts
}