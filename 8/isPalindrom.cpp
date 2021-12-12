#include <string>
#include <cctype>

bool isPalindrom(const std::string& str)
{
    std::string new_str = "";
    for (int i = str.size(); i >= 0; i--)
    {
        new_str += str[i];
    }
    int m = 0, j = str.length() - 1;
    while (m < j)
    {
        return new_str[m] != str[j] ? false : m++, j--;   
    }
    return true;
}
