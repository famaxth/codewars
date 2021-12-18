#include <algorithm>

std::string twoSort(std::vector<std::string> s) {
    std::string result;
    std::sort(s.begin(), s.end());
    for (size_t i = 0; i < s[0].length(); i++) {i == 0 ? result = s[0][0] : result = result + "***" + s[0][i];}
    return result;
}
