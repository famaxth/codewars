int summation(int num){
    if (num == 1)
    {
        return 1;
    }
    else
    {
        int sum = 0;
        for (int i = 1; i <= num; i++)                                             
        {
            sum += i;
        }
        return sum;
    }
}
