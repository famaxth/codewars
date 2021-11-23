#include <iostream>
#include <string>

using namespace std;

int getCount(const string& inputStr){
  int num_vowels = 0;
  for (string::size_type i = 0; i < inputStr.length(); i++)
  {
    if (inputStr[i] == 'a' || inputStr[i] == 'e' || inputStr[i] == 'i' || inputStr[i] == 'o' || inputStr[i] == 'u')
    {
      num_vowels += 1;
    }
  }
  return num_vowels;
}

int getResult(){
  cout << getCount("abracadabra");
  return 0;
}
