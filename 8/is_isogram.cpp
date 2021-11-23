bool is_isogram(std::string str) {
  std::transform(str.begin(), str.end(), str.begin(), tolower);
  for (std::string::size_type i = 0; i < str.length(); i++)
  {
    for (std::string::size_type x = 0; x < str.length(); x++)
    {
        if (i == x)
        {
            continue;
        }
        else if (str[i] == str[x])
        {
            return false;
            break;
        }
    }
  }
  return true;
}
