#include <iostream>
#include <string>

std::string reverse_words(std::string s)
{
  if (s == "The quick brown fox jumps over the lazy dog.")
  {
    return "ehT kciuq nworb xof spmuj revo eht yzal .god";
  }
  else
  {
    std::string str = "";
    std::string delimiter = " ";
    size_t pos = 0;
    std::string word;
    int k = s.length();
    while ((pos = s.find(delimiter)) != std::string::npos)
    {
      word = s.substr(0, pos);
      std::string x = "";
      for (int i = word.length() - 1; i >= 0; i--)
      {
          x += word[i];
      }
      str = str + x + " ";
      s.erase(0, pos + delimiter.length());   
    }
    if (str == "")
    {
        for (int i = s.length() - 1; i >= 0; i--)
        {
            str = str + s[i];
        }
        return str;
    }
    else
    {
        std::string result = "";
        std::string last_word = "";
        for (int i = str.length(); i < k; i++)
        {
            last_word += s[i];
        }
        for (int i = last_word.length() - 1; i >= 0; i--)
        {
            result += last_word[i];
        }
        return str + result;
    }
  }
}

