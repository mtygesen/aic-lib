# Searching Algorithms in C++
All the searching algorithms works for all data types.


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

## Benchmark
The algorithms have been benchmarked with the Google micro benchmarking library on a computer with an overclocked Intel i7-9700K CPU @ 3.60 GHz. Each search algorithm has been tested on an ordered list of 10 elements. Each algorithm is called 4 times to find the first, middle, and last element as well as an element that is not contained within the list.

The result of the benchmarking is seen below:
```bash
------------------------------------------------------------
Benchmark                  Time             CPU   Iterations
------------------------------------------------------------
BM_BinarySearch         59.7 ns         59.7 ns     11583976
BM_LinearSearch         96.9 ns         96.9 ns      7378067
BM_SentinelSearch       96.8 ns         96.8 ns      7234731
```
