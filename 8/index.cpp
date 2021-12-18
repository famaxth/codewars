#include <cmath>
#include <vector>

int index(const std::vector<int> &vector, int n) {
    return n < vector.size() ? std::pow(vector[n], n) : -1;  
}
