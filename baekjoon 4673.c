#include <stdio.h>

int is_self(int n)
{
    int sum = n;

    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(void)
{
    int arr[10001], i, check;

    for (i = 1; i < 10001; i++)
    {
        check = is_self(i);
        if (check <10001)
            arr[check]=1;
    }
    for(i = 1; i < 10001; i++)
    {
        if(arr[i] != 1)
        printf("%d\n", i);
    }
}