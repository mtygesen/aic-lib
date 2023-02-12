# Sorting Algorithms in C++
## Algorithms Implemented
- Selection Sort

## Functions
```cpp
SelectionSort<T>(v);
Swap<T>(a, b);
```
- T = type
- v = vector

## Example Usage
```cpp
#include "algorithms-in-cpp/sorting/sorting.hpp"

int main() {

  std::vector<int> v = {3, 9, 11, 7, 3, 4, 20, 13};
  
  Selection Sort(v); // => {3, 3, 4, 7, 9, 11, 13, 20}

  return 0;
}
```
## Benchmark