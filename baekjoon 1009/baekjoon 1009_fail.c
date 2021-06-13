#include <stdio.h>
#include <stdlib.h>

int power(int x, int y)
{
    if (y == 0)
        return (1);
    return x * = power(x, y - 1);
}

int main(void)
{
    int t;
    int a, b;

    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", power(a, b) % 10);
    }
}

// 제곱되는 크기때문에 값이 무한대가 나옴