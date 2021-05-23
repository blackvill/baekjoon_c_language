#include <stdio.h>

int main(void)
{
    int n;
    int d;
    int count = 0;
    int digit;

    scanf("%d %d", &n, &d);
    for (int i = 1; i <= n; i++)
    {
        digit = i;
        while (digit)
        {
            if (digit % 10 == d)
                count++;
            digit /= 10;
        }
    }
    printf("%d", count);
}