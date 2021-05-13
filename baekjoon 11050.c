#include <stdio.h>

int factorial(int n)
{
    int result = 1;

    while (n)
    {
        result *= n;
        n--;
    }
    return (result);
}

int main(void)
{
    int n;
    int k;
    int result;

    scanf("%d%d", &n, &k);
    result = factorial(n) / (factorial(k) * factorial(n-k));
    printf("%d", result);
}