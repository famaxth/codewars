#include <vector>
#include <bits/stdc++.h>

using namespace std; 

int findSmallest(vector <int> list)
{
  int min = list[0];
  for (int i = 0; i < list.size(); i++)
  {
    if (list[i] < min)
    {
      min = list[i];
    }
  }
  return min;
}

int main()
{
    std::cout << sumTwoSmallestNumbers({ 5, 8, 12, 19, 22, 11, 1 });
    return 0;
}
