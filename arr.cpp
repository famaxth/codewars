#include <vector>

std::vector<int> arr(int n = 0) {
    std::vector<int> arr, arr2;
    for (int i = 0; i < n; i++) {arr.push_back(i);}
    return n == 0 ? arr2 : arr;
}
