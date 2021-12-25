#include <string>

bool is_uppercase(const std::string &s) {
    for (size_t i = 0; i < s.length(); i++) {if (islower(s[i])) return false;}
    return true;
}
