#include<string>

std::string bonus_time(int salary, bool bonus)
{
    std::ostringstream oss;
    if (bonus)
    {
        oss << salary * 10;
        return "$" + oss.str();
    }
    else
    {
        oss << salary;
        return "$" + oss.str();
    }
}
