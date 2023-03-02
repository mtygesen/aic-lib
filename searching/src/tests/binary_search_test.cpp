#include <cassert>
#include <string>
#include "../binary_search.hpp"

int main() {
    // Test 1: int
    std::vector<int> intVector = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int intTarget = 5;
    assert(BinarySearch(intVector, intTarget) == 4);

    // Test 2: double
    std::vector<double> doubleVector = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.10};
    double doubleTarget = 6.6;
    assert(BinarySearch(doubleVector, doubleTarget) == 5);

    // Test 3: string
    std::vector<std::string> stringVector = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j"};
    std::string stringTarget = "g";
    assert(BinarySearch(stringVector, stringTarget) == 6);

    // Test 4: char
    std::vector<char> charVector = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
    char charTarget = 'h';
    assert(BinarySearch(charVector, charTarget) == 7);

    // Test 5: bool
    std::vector<bool> boolVector = {false, true};
    bool boolTarget = false;
    assert(BinarySearch(boolVector, boolTarget) == 0);

    // Test 6: not found
    std::vector<int> intVector2 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int intTarget2 = 11;
    assert(BinarySearch(intVector2, intTarget2) == -1);

    // Test 7: empty vector
    std::vector<int> intVector3 = {};
    int intTarget3 = 11;
    assert(BinarySearch(intVector3, intTarget3) == -1);
}