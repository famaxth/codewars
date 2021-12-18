std::vector<int> divisible_by(std::vector<int> numbers, int m) {
    std::vector<int> arr;
    for(int i = 0; i < numbers.size(); i++) {if (numbers[i] % m == 0) arr.push_back(numbers[i]);}
    return arr;
}
