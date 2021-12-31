#include <vector>

bool PythagoreanTriple(const int a, const int b, const int c)
{
    std::vector<int> arr {a, b, c};
    int max = a;
    for (size_t i = 1; i < arr.size(); i++) {
        if (arr[i] > max) max = arr[i];
    }
    std::cout << a << "\t" << b << "\t" << c << std::endl;
    int n_a, n_b;
    if (max == a) {
        n_a = b;
        n_b = c;
    } else if (max == b) {
        n_a = a;
        n_b = c;
    } else {
        n_a = a;
        n_b = b;
    }
    return max * max == n_a * n_a + n_b * n_b;
}
