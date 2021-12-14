#include <vector>

std::vector<int> countPositivesSumNegatives(std::vector<int> input)
{
    std::vector<int> Array1;
    std::vector<int> Array2;
    std::vector<int> Array3;
    
    if (input.size() != 0) {
      int neg_value = 0;
      for (size_t i = 0; i < input.size(); i++)
      {
          if (input[i] < 0) Array1.push_back(input[i]);
          else if (input[i] > 0) Array2.push_back(input[i]);
      }
      for (size_t j = 0; j < Array1.size(); j++)
      {
          neg_value += Array1[j];
      }
      Array3.push_back(Array2.size());
      Array3.push_back(neg_value);
    }
    return Array3;
}
