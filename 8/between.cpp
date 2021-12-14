#include <vector>

std::vector<int> between(int start, int end) {
    std::vector<int> Array;
    for (int i = start; i < end + 1; i++)
    {
        Array.push_back(i);
    }
    return Array;
}
