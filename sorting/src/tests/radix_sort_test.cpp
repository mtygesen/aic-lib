#include "sort_test_template.hpp"
#include "../radix_sort.hpp"

int main() {
    RadixSort(intVectorM); // Test 1: int
    RadixSort(doubleVectorM); // Test 2: double
    RadixSort(charVectorM); // Test 3: char
    RadixSort(intVector2M); // Test 4: empty vector

    SortAssert3(); // Run asserts
}