#include <iostream>
#include <vector>

long sumTwoSmallestNumbers(std::vector<int> numbers)
{
    long arr[2] = {};
    long minSize_1 = 9223372036854775807;
    long minSize_2 = 9223372036854775807;
    int size = sizeof(numbers)/sizeof(numbers[0]);

    for (int i = 0; i < size; i++)
    {
        if (numbers[i] < minSize_1)
        {
            minSize_1 = numbers[i];
        }
    }
    std::cout << minSize_1 << std::endl; 
    arr[0] = minSize_1;
      
  
    for (int x = 0; x < size; x++)
    {
        if (numbers[x] > minSize_1 && numbers[x] < minSize_2)
        {
            minSize_2 = numbers[x];
        }
    }
    std::cout << minSize_1 << std::endl; 
    arr[1] = minSize_2;
  
    return arr[0] + arr[1];
}


int main()
{
    std::cout << sumTwoSmallestNumbers({ 5, 8, 12, 19, 22, 11, 1 });
    return 0;
}
