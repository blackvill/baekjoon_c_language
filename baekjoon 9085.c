#include <stdio.h>

int main(void)
{
    int t;
    int n;
    int num;
    int sum;

    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        sum = 0;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &num);
            sum += num;
        }
        printf("%d\n", sum);
    }
}