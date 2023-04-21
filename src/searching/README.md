# Searching Algorithms in C++

All the search algorithms work for all data types.

## Algorithms Implemented

- Binary Search
- Linear Search
- Sentinel Search

## Functions

```cpp
BinarySearch<T>(v, key);
LinearSearch<T>(v, key);
SentinelSearch<T>(v, key);
```

- T = type
- v = vector
- key = element to find

## Example Usage

```cpp
#include "algorithms-in-cpp/searching/searching.hpp"

int main() {

  std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8};

  int key = 3;
  
  BinarySearch(v, key); // => 2

  return 0;
}
```
