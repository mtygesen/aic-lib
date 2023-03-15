#ifndef aic_sort_test_template
#define aic_sort_test_template

#include <cassert>
#include <string>
#include <vector>

// int
std::vector<int> intVector = {5, 4, 3, 2, 1};
std::vector<int> intVectorTarget = {1, 2, 3, 4, 5};

// double
std::vector<double> doubleVector = {5.5, 4.4, 3.3, 2.2, 1.1};
std::vector<double> doubleVectorTarget = {1.1, 2.2, 3.3, 4.4, 5.5};

// string
std::vector<std::string> stringVector = {"e", "d", "c", "b", "a"};
std::vector<std::string> stringVectorTarget = {"a", "b", "c", "d", "e"};

// char
std::vector<char> charVector = {'e', 'd', 'c', 'b', 'a'};
std::vector<char> charVectorTarget = {'a', 'b', 'c', 'd', 'e'};

// bool
std::vector<bool> boolVector = {true, false};
std::vector<bool> boolVectorTarget = {false, true};

// empty vector
std::vector<int> intVector2 = {};
std::vector<int> intVectorTarget2 = {};

// matrix int
std::vector<std::vector<int>> intVectorM = {{5, 4, 3, 2, 1}, {1, 2, 3, 4, 5}, {5, 4, 3, 2, 1}};
std::vector<std::vector<int>> intVectorTargetM = {{1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}};

// matrix double
std::vector<std::vector<double>> doubleVectorM = {{5.5, 4.4, 3.3, 2.2, 1.1}, {1.1, 2.2, 3.3, 4.4, 5.5}, {5.5, 4.4, 3.3, 2.2, 1.1}};
std::vector<std::vector<double>> doubleVectorTargetM = {{1.1, 2.2, 3.3, 4.4, 5.5}, {1.1, 2.2, 3.3, 4.4, 5.5}, {1.1, 2.2, 3.3, 4.4, 5.5}};

// matrix char
std::vector<std::vector<char>> charVectorM = {{'e', 'd', 'c', 'b', 'a'}, {'a', 'b', 'c', 'd', 'e'}, {'e', 'd', 'c', 'b', 'a'}};
std::vector<std::vector<char>> charVectorTargetM = {{'a', 'b', 'c', 'd', 'e'}, {'a', 'b', 'c', 'd', 'e'}, {'a', 'b', 'c', 'd', 'e'}};

// empty matrix
std::vector<std::vector<int>> intVector2M = {{}};
std::vector<std::vector<int>> intVectorTarget2M = {{}};

/**
 * @brief Asserts sorting for all normal data types,  and for the scenario where the vector is empty.
 */
inline void SortAssert() {
    assert(intVector == intVectorTarget);
    assert(doubleVector == doubleVectorTarget);
    assert(stringVector == stringVectorTarget);
    assert(charVector == charVectorTarget);
    assert(boolVector == boolVectorTarget);
    assert(intVector2 == intVectorTarget2);
}

/**
 * @brief Asserts sorting for all normal data types except strings.
 */
inline void SortAssert2() {
    assert(intVector == intVectorTarget);
    assert(doubleVector == doubleVectorTarget);
    assert(charVector == charVectorTarget);
    assert(boolVector == boolVectorTarget);
    assert(intVector2 == intVectorTarget2);
}

/**
 * @brief Asserts sorting for matrices.
 */
inline void SortAssert3() {
    assert(intVectorM == intVectorTargetM);
    assert(doubleVectorM == doubleVectorTargetM);
    assert(charVectorM == charVectorTargetM);
    assert(intVector2M == intVectorTarget2M);
}


#endif