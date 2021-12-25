#include <utility>

std::pair<int, int> swap_values(std::pair<int, int> values) {
    int x = values.second;
    values.second = values.first;
    values.first = x;
    return values;
}
