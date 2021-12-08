std::string how_much_i_love_you(int a) {
  int j = 2;
  std::string result;
  for (int i = 1; i < a; i++)
  {
      if (j == 7)
      {
        j = 1;
      }
      result = j == 1 ? "I love you" : j == 2 ? "a little" : j == 3 ? "a lot" : j == 4 ? "passionately" : j == 5 ? "madly" : "not at all";
      j++;
  }
  return result;
}
