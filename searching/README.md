# Searching Algorithms in C++
## Algorithms Implemented
- Binary Search
- Linear Search
- Sentinel Search

## Functions
```cpp
binarySearch<T>(v, key);
linearSearch<T>(v, key);
sentinelSearch<T>(v, key);
```
- T = type 
- v = vector 
- key = element to find

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
