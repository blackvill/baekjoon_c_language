#include <stdio.h>

int main(void)
{
    int t;
    int a, b;
    int sum;

    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        scanf("%d%d", &a, &b);
        sum = a + b;
        printf("Case #%d: %d\n", i, sum);
    }
}