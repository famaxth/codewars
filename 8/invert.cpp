#include <vector>

std::vector<int> invert(std::vector<int> values) {
    std::vector<int> arr;
    for (int i = 0; i < values.size(); i++) {arr.push_back(-values[i]);}
    return arr;
}
