#include <vector>

std::vector<uint64_t> powers_of_two(int n) {
    std::vector<uint64_t> arr;
    for (int i = 0; i <= n; i++) {i == 0 ? arr.push_back(1) : arr.push_back(arr[i - 1] * 2);}
    return arr;
}
