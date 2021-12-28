#include <vector>
#include <string>

std::vector<std::string> string_to_array(const std::string& s) {
    std::vector<std::string> arr;
    std::string str = "";
    size_t x = 0, j = 0;
    for (size_t i = 0; i < s.size(); i++) {if (s[i] == ' ') x++;}
    for (size_t i = 0; i <= x; i++)
    {
        for (; j < s.size(); j++)
        {
            if (s[j] == ' ') {
                j++;
                break;
            }
            str += s[j];
        }
        arr.push_back(str);
        str = "";
    }
    return arr;
}
