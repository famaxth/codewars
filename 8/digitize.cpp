#include <string>

std::vector<int> digitize(unsigned long n) 
{        
    std::vector<int> arr;
    std::string str = std::to_string(n);
    for (int i = str.length() - 1; i >= 0; i--) {arr.push_back(str[i] - '0');}
    return arr;
}
