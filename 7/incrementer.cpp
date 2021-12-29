#include <vector>
#include <string>

std::vector<int> incrementer(std::vector<int> nums){
    std::vector<int> arr;
    std::string str;
    char ch;
    for (size_t i = 0, j = 1; i < nums.size(); i++, j++) {
        if (nums[i] + j >= 10)
        {
            str = std::to_string(nums[i] + j);
            ch = str[str.length() - 1];
            arr.push_back(ch - '0');
        }
        else arr.push_back(nums[i] + j);
    }
    return arr;
}
