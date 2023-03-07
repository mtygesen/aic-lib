#include <iostream>
#include "../quick_sort.hpp"

int main() {
    std::vector<int> v = {10, 80, 30, 90, 40, 50, 70};
    Partition(v, 0, 6);
    for (auto i : v) {
        std::cout << i << " ";
    }
    std::cout << '\n';
    return 0;
}