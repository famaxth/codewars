#include <string>

char get_age(const std::string& she_said) {
    char x = she_said[0];
    int a = (int)x - 48;
    return a;
}
