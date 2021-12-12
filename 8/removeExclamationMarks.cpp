#include <string>

std::string removeExclamationMarks(std::string str){
    std::string new_str = "";
    for (size_t i = 0; i < str.length(); i++)
    {
        if (str[i] != '!') new_str += str[i];
    }
    return new_str;
}
