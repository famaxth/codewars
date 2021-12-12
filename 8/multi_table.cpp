#include <string>
#include <sstream>

std::string multi_table(int number)
{
    std::string str = "";
    for (int i = 1; i <= 10; i++)
    {
        if (i == 1)
        {
            std::ostringstream oss1;
            std::ostringstream oss2;
            std::ostringstream oss3;
            oss1 << i;
            str += oss1.str() + " * ";
            oss2 << number;
            str += oss2.str() + " = ";
            oss3 << number * i;
            str += oss3.str();
        }
        else
        {
            std::ostringstream oss1;
            std::ostringstream oss2;
            std::ostringstream oss3;
            oss1 << i;
            str += "\n" + oss1.str() + " * ";
            oss2 << number;
            str += oss2.str() + " = ";
            oss3 << number * i;
            str += oss3.str();
        }
    }
    return str;
}
