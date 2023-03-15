#ifndef aic_search_test_template
#define aic_search_test_template

#include <cassert>
#include <string>
#include <vector>

// int
std::vector<int> intVector = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int intTarget = 5;

// double
std::vector<double> doubleVector = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.10};
double doubleTarget = 6.6;

// string
std::vector<std::string> stringVector = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j"};
std::string stringTarget = "g";

// char
std::vector<char> charVector = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
char charTarget = 'h';

// bool
std::vector<bool> boolVector = {false, true};
bool boolTarget = false;

// not found
std::vector<int> intVector2 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int intTarget2 = 11;
    
// empty vector
std::vector<int> intVector3 = {};
int intTarget3 = 11;

#endif