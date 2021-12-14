#include <string>
#include <sstream>

std::string number_to_string(int num) {
    std::ostringstream oss;
    oss << num;
    return oss.str();
}
