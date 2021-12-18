#include <string>

std::string fakeBin(std::string str){
    std::string result = "";
    for (size_t i = 0; i < str.size(); i++) {str[i] - '0' < 5 ? result += "0" : result += "1";}
    return result;
}
