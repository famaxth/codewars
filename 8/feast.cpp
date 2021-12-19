#include <string>

bool feast(std::string b, std::string d) {
    return (b[0] == d[0]) & (b[b.length() - 1] == d[d.length() - 1]) ? true : false; 
}
