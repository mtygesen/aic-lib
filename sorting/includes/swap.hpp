#ifndef swap
#define swap

template <class T> void Swap(T* a, T* b) {
    auto tmp = *a;
    *b = *a;
    *a = tmp;
}

#endif