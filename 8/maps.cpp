std::vector<int> maps(const std::vector<int> & values) {
    std::vector<int> arr;
    for (size_t i = 0; i < values.size(); i++) {arr.push_back(values[i] * 2);}
    return arr;
}
