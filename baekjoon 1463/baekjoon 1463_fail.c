#include <stdio.h>

int calculate(int value, int count)
{
    if(value == 1)
        return count; 
    else if(value % 3 == 0)
        count = calculate(value /= 3, ++count);
    else if(value % 2 == 0)
    {
        if((value - 1) % 9 == 0)
            count = calculate(value - 1, ++count);
        else
            count = calculate(value / 2, ++count);
    }
    else
        count = calculate(value - 1, ++count);
    return count;
}

int main()
{
    int value;
    int ret = 0;

    scanf("%d", &value);
    printf("%d\n", calculate(value, ret));
}