#include <cassert>
#include <string>
#include "../insertion_sort.hpp"

int main() {
    // Test 1: int
    std::vector<int> intVector = {5, 4, 3, 2, 1};
    std::vector<int> intVectorTarget = {1, 2, 3, 4, 5};
    InsertionSort(intVector);
    assert(intVector == intVectorTarget);

    // Test 2: double
    std::vector<double> doubleVector = {5.5, 4.4, 3.3, 2.2, 1.1};
    std::vector<double> doubleVectorTarget = {1.1, 2.2, 3.3, 4.4, 5.5};
    InsertionSort(doubleVector);
    assert(doubleVector == doubleVectorTarget);

    // Test 3: string
    std::vector<std::string> stringVector = {"e", "d", "c", "b", "a"};
    std::vector<std::string> stringVectorTarget = {"a", "b", "c", "d", "e"};
    InsertionSort(stringVector);
    assert(stringVector == stringVectorTarget);

    // Test 4: char
    std::vector<char> charVector = {'e', 'd', 'c', 'b', 'a'};
    std::vector<char> charVectorTarget = {'a', 'b', 'c', 'd', 'e'};
    InsertionSort(charVector);
    assert(charVector == charVectorTarget);

    // Test 5: bool
    std::vector<bool> boolVector = {true, false};
    std::vector<bool> boolVectorTarget = {false, true};
    InsertionSort(boolVector);
    assert(boolVector == boolVectorTarget);

    // Test 6: empty vector
    std::vector<int> intVector2 = {};
    std::vector<int> intVectorTarget2 = {};
    InsertionSort(intVector2);
    assert(intVector2 == intVectorTarget2);
}
