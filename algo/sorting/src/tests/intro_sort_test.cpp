#include "sort_test_template.hpp"
#include "../heap_sort.hpp"
#include "../intro_sort.hpp"
#include "../quick_sort.hpp"

int main() {
    IntroSort(intVector); // Test 1: int
    IntroSort(doubleVector); // Test 2: double
    IntroSort(stringVector); // Test 3: string
    IntroSort(charVector); // Test 4: char
    IntroSort(boolVector); // Test 5: bool
    IntroSort(intVector2); // Test 6: empty vector

    SortAssert(); // Run asserts
}