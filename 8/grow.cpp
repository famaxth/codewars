#include <vector>
int grow(std::vector<int> nums) {
    int sum = 1;
    for (size_t i = 0; i < nums.size(); i++) {sum *= nums[i];}
    return sum;
}
