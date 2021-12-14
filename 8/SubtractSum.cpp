
// TEST VERSION

#include <string>
#include <sstream>

std::string SubtractSum(int n)
{
  std::string value;
  int k = 0, m;
  int arr_numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  std::string arr[10] = {"kiwi", "pear", "kiwi", "banana", "melon", "banana", "melon", "pineapple", "apple", "pineapple"};
  while (true)
  {
    std::ostringstream oss;
    oss << n;
    value = oss.str();
    for (size_t i = 0; i < value.length(); i++)
    {
      k += value[i];
    }
    m = n - k;
    for (int i = 0; i < 10; i++)
    {
      if (m == arr_numbers[i])
      {
        return arr[i];
        break;
      }
    }
  }
}
