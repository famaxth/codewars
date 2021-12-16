#include <string>

std::string makeUpperCase (const std::string& data) {
    std::string str = "";
    for (size_t i = 0; i < data.length(); i++) {str += toupper(data[i]);}
    return str;
}
