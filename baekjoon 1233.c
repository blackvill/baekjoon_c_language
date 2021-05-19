#include <stdio.h>

int main(void)
{
    int a, b, c;
    int count[100] = {0, };
    int max = 0;
    int maxcount = 0;
    int sum;

    scanf("%d %d %d", &a, &b, &c);
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            for (int k = 1; k <= c; k++)
            {
                sum = i + j + k;
                count[sum]++;
            }
        }
    }
    for (int i = 0; i < 100; i++)
    {
        if (max < count[i])
        {
            max = count[i];
            maxcount = i;
        }
    }
    printf("%d", maxcount);
}