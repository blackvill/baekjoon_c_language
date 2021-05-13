#include <stdio.h>

int fibonacci(int num)
{
    int result;

    result = 1;
    if (num < 0)
        return (-1);
    else if (num == 0)
        return (0);
    else if (num == 1 || num == 2)
        return (1);
    result = fibonacci(num - 1) + fibonacci(num - 2);
    return (result);
}

int main(void)
{
    int num = 0;
    int result = 0;

    scanf("%d", &num);

    result = fibonacci(num);
    printf("%d", result);
}