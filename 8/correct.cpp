#include <string>

std::string correct(std::string str){
    std::string new_str = "";
    for (size_t i = 0; i < str.length(); i++)
    {
        if (str[i] == '0') new_str += 'O';
        else if (str[i] == '1') new_str += 'I';
        else if (str[i] == '5') new_str += 'S';
        else new_str += str[i];
    }
    return new_str;
}
