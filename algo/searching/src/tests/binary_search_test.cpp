#include "search_test_template.hpp"
#include "../binary_search.hpp"

int main() {
    assert(BinarySearch(intVector, intTarget) == 4); // Test 1: int
    assert(BinarySearch(doubleVector, doubleTarget) == 5); // Test 2: double
    assert(BinarySearch(stringVector, stringTarget) == 6); // Test 3: string
    assert(BinarySearch(charVector, charTarget) == 7); // Test 4: char
    assert(BinarySearch(boolVector, boolTarget) == 0); // Test 5: bool
    assert(BinarySearch(intVector2, intTarget2) == -1); // Test 6: not found
    assert(BinarySearch(intVector3, intTarget3) == -1); // Test 7: empty vector
}