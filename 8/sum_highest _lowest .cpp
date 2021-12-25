#include<vector>

int sum(std::vector<int> numbers) {
    int mn = numbers[0], mx = numbers[0], sum = 0;
    for (size_t i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] <= mn) mn = numbers[i];
        if (numbers[i] >= mx) mx = numbers[i];
    }
    for (size_t i = 0; i < numbers.size(); i++) {sum += numbers[i];}
    return (numbers.size() == 1) || numbers.empty() ? 0 : sum - (mn + mx);
}
