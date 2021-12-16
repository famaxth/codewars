std::vector<int> reverseSeq(int n) {
    std::vector<int> arr;
    for (int i = n; i >= 1; i--) {arr.push_back(i);}
    return arr;
}
