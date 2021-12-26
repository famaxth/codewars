#include <array>
#include <string>

std::array<std::string, 3> fixTheMeerkat(std::array<std::string, 3> arr) {
    std::array<std::string, 3> res;
    for (int i = 2, j = 0; i >= 0; i--, j++) {res[j] = arr[i];}
    return res;
}
