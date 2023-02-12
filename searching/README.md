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

## Benchmark
The algorithms has been benchmarked with the Google microbenchmarking library on a computer with a overclocked Intel i7-9700K CPU @ 3.60 GHz. Each searching algorithm has been tested on a ordered list of 10 elements. Each algorithm is called 4 times to find the first, middle, last and an element that is not contained in the list.

The result of the benchmarking is seen below:
```bash
------------------------------------------------------------
Benchmark                  Time             CPU   Iterations
------------------------------------------------------------
BM_binarySearch         59.7 ns         59.7 ns     11583976
BM_linearSearch         96.9 ns         96.9 ns      7378067
BM_sentinelSearch       96.8 ns         96.8 ns      7234731
```
