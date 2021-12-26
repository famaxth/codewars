int sumOfDifferences(std::vector<int> arr){
    if (arr.empty()) return 0;
    sort(arr.begin(), arr.end(), std::greater<int>()); 
    return arr[0] - arr[arr.size() - 1];
}
