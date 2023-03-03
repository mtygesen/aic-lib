# Sorting Algorithms in C++

All the sorting algorithms work for all data types.

## Algorithms Implemented

- Bubble Sort
- Insertion Sort
- Merge Sort
- Selection Sort

## Functions

```cpp
BubbleSort<T>(v);
InsertionSort<T>(v);
MergeSort<T>(v);
SelectionSort<T>(v);
```

- T = type
- v = vector

## Example Usage

```cpp
#include "algorithms-in-cpp/sorting/sorting.hpp"

int main() {

  std::vector<int> v = {3, 9, 11, 7, 3, 4, 20, 13};
  
  SelectionSort(v); // => {3, 3, 4, 7, 9, 11, 13, 20}

  return 0;
}
```
