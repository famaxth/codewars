#include <vector>
std::vector<int> countBy(int x, int n){
    std::vector<int> arr;
    for (int i = 1, m = x; i <= n; i++, m += x) {arr.push_back(m);}
    return arr;
}
