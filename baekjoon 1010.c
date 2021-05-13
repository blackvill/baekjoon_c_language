#include <stdio.h>

double factorial(int num)
{
    if (num == 0)
        return (1);
    return (num * factorial(num - 1))
}

double combination(int n, int m)
{
    return (factorial(n) / (factorial(n - m) * factorial(m)));
}

int main(void)
{
    int i = 0;
    int T = 0;
    int n = 0;
    int m = 0;

    scanf("%d", &T);
    while (i < T)
    {
        scanf("%d%d", &n, &m);
        printf("%.0f\n", combination(m, n));
        i++;
    }
}