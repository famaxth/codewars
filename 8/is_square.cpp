#include <cmath>

bool is_square(int n)
{
  int v = sqrt(n);
  return v * v == n;
}
