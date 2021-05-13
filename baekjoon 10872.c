#include <stdio.h>

int recursive_factorial(int num)
{
    int result;

    result = 0;
    if (num < 0)
        return (0);
    else if (num == 0 || num == 1)
        return (1);
    result = recursive_factorial(num - 1) * num;
    return (result);
}

int main(void)
{
    int num = 0;
    int result = 0;

    scanf("%d", &num);

    result = recursive_factorial(num);
    printf("%d", result);
}