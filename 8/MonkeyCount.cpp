#include <vector>

std::vector<int> MonkeyCount(int n) {
    std::vector<int> arr;
    for (int i = 1; i <= n; i++) {arr.push_back(i);}
    return arr;
}
