#include <string>

std::string repeat_str(size_t repeat, const std::string& str) {
  std::string new_str = "";
  for (size_t i = 0; i < repeat; i++)
  {
    new_str += str;
  } 
  return new_str;
}
