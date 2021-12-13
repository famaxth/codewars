#include <string>

unsigned int strCount(std::string word, char letter){
    int m = 0;
    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] == letter) m++;
    }
    return m;
}
