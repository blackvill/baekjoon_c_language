#include <stdio.h>

int devide_sum(int n, int sum)
{
    sum += n % 10;
    n = n / 10;
    
    if(n > 0)
        return devide_sum(n, sum);
    else
        return sum;
}

int main(void)
{
    int n, i, sum, check = 0;
    scanf("%d", &n);
    for (i = 10; i <= n; i++)
    {
        sum = i;
        sum = devide_sum(i, sum);
        if(sum == n)
        {
            printf("%d\n", i);
            check = 1;
            break;
        }
    }
    if (check == 0)
        printf("%d\n", 0);
}