#include <vector>

std::vector<int> humanYearsCatYearsDogYears(int y) {
    std::vector<int> arr;
    arr.push_back(y);
    y == 1 ? arr.push_back(15) : y == 2 ? arr.push_back(24) : arr.push_back(24 + 4 * (y - 2));
    y == 1 ? arr.push_back(15) : y == 2 ? arr.push_back(24) : arr.push_back(24 + 5 * (y - 2));
    return arr;
}
