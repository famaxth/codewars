#include <vector>

std::vector<int> flip(const char dir, std::vector<int> arr) {
    if (dir == 'R') sort(arr.begin(), arr.end());
    else sort(arr.rbegin(), arr.rend());
    return arr;
}
