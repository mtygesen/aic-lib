# Searching Algorithms in C++
## Algorithms Implemented
- Linear Search
- Binary Search

## Functions
```cpp
linearSearch<T>(v, x);
binarySearch<T>(v, x);
```
- T = type 
- v = vector 
- x = element to find

## Example usage
```cpp
#include "searching/searching.hpp"

int main() {

  vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8};

  int value = 3;
  
  binarySearch<int>(vec, value); // => 2

  return 0;
}
```
