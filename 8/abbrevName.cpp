#include <string>
#include <cctype>

std::string abbrevName(std::string name)
{
  std::string first_name, last_name, result = "";
  for (size_t i = 0; i < name.size(); i++)
  {
    if (name[i] == ' ')
    {
      first_name = std::toupper(name[0]);
      last_name = std::toupper(name[i + 1]);
      break;
    }
  }
  result = first_name + "." + last_name;
  return result;
}
