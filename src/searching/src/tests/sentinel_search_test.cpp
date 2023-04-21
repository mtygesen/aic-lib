#include "search_test_template.hpp"
#include "../sentinel_search.hpp"

int main() {
    assert(SentinelSearch(intVector, intTarget) == 4); // Test 1: int
    assert(SentinelSearch(doubleVector, doubleTarget) == 5); // Test 2: double
    assert(SentinelSearch(stringVector, stringTarget) == 6); // Test 3: string
    assert(SentinelSearch(charVector, charTarget) == 7); // Test 4: char
    assert(SentinelSearch(boolVector, boolTarget) == 0); // Test 5: bool
    assert(SentinelSearch(intVector2, intTarget2) == -1); // Test 6: not found
    assert(SentinelSearch(intVector3, intTarget3) == -1); // Test 7: empty vector
}