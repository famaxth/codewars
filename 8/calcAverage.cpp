#include <vector>

double calcAverage(const std::vector<int>& values){
    double i = 0, sum = 0;
    for ( ; i < values.size(); i++) {sum += values[i];}
    return sum / i;
}
