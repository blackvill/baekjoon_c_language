#include <stdio.h>

int ft_factorial(int n)
{
    int fac = 1;
    while (n)
    {
        fac *= n;
        n--;
    }
    return (fac);
}

int main(void)
{
    int n;
    int result = 0;
    int count = 0;

    scanf("%d", &n);
    result = ft_factorial(n);
    while (1)
    {
        if (result < 1)
            break;
        if (result % 10 == 0)
            count++;
        result /= 10;
    }
    printf("%d", count);
}