#include <cctype>

std::string to_alternating_case(const std::string& str) {
    char ch;
    std::string res = "";
    for (size_t i = 0; i < str.length(); i++)
    {
        isupper(str[i]) ? ch = tolower(str[i]) : ch = toupper(str[i]);
        res += ch;
    }
    return res;
}
