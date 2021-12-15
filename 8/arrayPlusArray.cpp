#include <vector>

int arrayPlusArray(std::vector<int> a, std::vector<int> b) {
    int sum = 0;
    for (int i = 0; i < a.size(); i++) {sum += a[i];}
    for (int j = 0; j < b.size(); j++) {sum += b[j];}
    return sum;
}
