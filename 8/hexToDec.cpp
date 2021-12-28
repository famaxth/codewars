#include <cmath>

int hexToDec(std::string s)
{
    int m, n = 0;
    bool isMinus = false;
    for (size_t i = s.size() - 1, j = 0; j < s.size(); i--, j++)
    {
        if (s[0] == '-') {
            s[0] = '0';
            isMinus = true;
        }
        if (s[j] == 'a' || s[j] == 'A') m = 10;
        else if (s[j] == 'b' || s[j] == 'B') m = 11;
        else if (s[j] == 'c' || s[j] == 'C') m = 12;
        else if (s[j] == 'd' || s[j] == 'D') m = 13;
        else if (s[j] == 'e' || s[j] == 'E') m = 14;
        else if (s[j] == 'f' || s[j] == 'F') m = 15;
        else m = s[j] - '0';
        n = n + (m * (pow(16, i)));
    }
    return isMinus ? -n : n;
}
