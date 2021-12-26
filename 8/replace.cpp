std::string replace(const std::string &s)
{
    std::string str = "";
    for (size_t i = 0; i < s.length(); i++)
    {
        if (toupper(s[i]) == 'A' || toupper(s[i]) == 'E' || toupper(s[i]) == 'I' || toupper(s[i]) == 'O' || toupper(s[i]) == 'U')
        {
            str += '!';
        }
        else str += s[i];
    }
    return str;
}
