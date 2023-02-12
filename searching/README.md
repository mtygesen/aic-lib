# Searching Algorithms in C++
## Algorithms Implemented
- Linear Search
- Binary Search

## Functions
```cpp
linearSearch<T>(T v, T a);
binarySearch<T>(T v, T a);
```

## Example usage
```cpp
#include "searching.h"

int main() {

  vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8};

  int value = 3;
  
  binarySearch<int>(vec, value); // => 2

  return 0;
}
```
