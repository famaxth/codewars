#include <vector>

int odd_count(int n){
    std::vector<int> arr;
    for (int i = 1; i < n; i += 2) {arr.push_back(i);}
    return arr.size();
}
