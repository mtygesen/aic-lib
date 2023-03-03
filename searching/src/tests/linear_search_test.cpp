#include "search_test_template.hpp"
#include "../linear_search.hpp"

int main() {
    assert(LinearSearch(intVector, intTarget) == 4); // Test 1: int
    assert(LinearSearch(doubleVector, doubleTarget) == 5); // Test 2: double
    assert(LinearSearch(stringVector, stringTarget) == 6); // Test 3: string
    assert(LinearSearch(charVector, charTarget) == 7); // Test 4: char
    assert(LinearSearch(boolVector, boolTarget) == 0); // Test 5: bool
    assert(LinearSearch(intVector2, intTarget2) == -1); // Test 6: not found
    assert(LinearSearch(intVector3, intTarget3) == -1); // Test 7: empty vector
}