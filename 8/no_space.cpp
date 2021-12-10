#include <string>

std::string no_space(std::string x)
{
    std::string new_str = ""; 
    for (int i = 0; i < x.size(); i++)
    {
        if (x[i] != ' ') new_str += x[i];
    }
    return new_str;
}
