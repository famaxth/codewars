#include <string>

std::string countSheep(int number) {
    std::string str = "";
    for (int i = 1; i <= number; i++)
    {
        std::ostringstream oss;
        oss << i;
        str = str + oss.str() + " sheep...";
    }
    return str;
}
