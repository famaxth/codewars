#include <vector>

int count_sheep(std::vector<bool> arr) 
{
  int m = 0;
  for (int i = 0; i < arr.size(); i++) {if (arr[i] == true) m++;}
  return m;
}
