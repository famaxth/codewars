int get_sum(int a, int b)
{
    int sum = 0;
    if (a > b)
    {
        for (int i = a; i > b; i--)
        {
            sum += i;
        }
        return sum + b;
    }
    else
    {
        for (int i = a; i < b; i++)
        {
            sum += i;
        }
        return sum + b;
    }
}
