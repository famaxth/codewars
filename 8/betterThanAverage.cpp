#include <vector>

bool betterThanAverage(std::vector<int> classPoints, int yourPoints) {
    classPoints.push_back(yourPoints);
    int sum = 0;
    for (int i = 0; i < classPoints.size(); i++) {sum += classPoints[i];}
    return yourPoints > sum / classPoints.size();
}
