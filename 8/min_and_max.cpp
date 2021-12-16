#include <vector>

int min(std::vector<int> list){
    int value = list[0];
    for (int i = 0; i < list.size(); i++) {if (list[i] < value) value = list[i];}
    return value;
}

int max(std::vector<int> list){
    int value = list[0];
    for (int i = 0; i < list.size(); i++) {if (list[i] > value) value = list[i];}
    return value;
}
