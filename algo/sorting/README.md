# Sorting Algorithms in C++

All the sorting algorithms work for most data types.

## Algorithms Implemented

- Bubble Sort
- Count Sort
- Heap Sort
- Insertion Sort
- Intro Sort
- Merge Sort
- Quick Sort
- Radix Sort
- Selection Sort

## Functions

```cpp
BubbleSort<T>(v);
CountSort<T>(v)
HeapSort<T>(v);
InsertionSort<T>(v);
IntroSort<T>(v);
MergeSort<T>(v);
QuickSort<T>(v);
RadixSort<T>(v);
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
