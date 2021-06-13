#include <stdio.h>

int main(void)
{
    int t, a, b;
    int num;

    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &a, &b);
        num = 1;
        for (int j = 0; j < b; j++)
        {
            num *= a;
            num %= 10;
        }
        if (num == 0)
            printf("10\n");
        else
            printf("%d\n", num);
    }
}