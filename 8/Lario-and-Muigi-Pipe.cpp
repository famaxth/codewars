#include <vector>

std::vector<int> pipe_fix(const std::vector<int>& nums) {
    std::vector<int> Array;
    for (int i = nums[0]; i <= nums[nums.size() - 1]; i++)
    {
        Array.push_back(i);
    }
    return Array;
}
