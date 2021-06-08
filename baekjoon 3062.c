#include <stdio.h>

int rev_num(int n)
{
    int rev = 0;

    while (n)
    {
        rev *= 10;
        rev += n % 10;
        n /= 10;
    }
    return (rev);
}

int main(void)
{
    int t;
    int n;
    int rev;
    int sum;
    int rev_sum;

    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        rev = rev_num(n);
        sum = n + rev;
        rev_sum = rev_num(sum);
        if (sum == rev_sum)
            printf("YES\n");
        else
            printf("NO\n");
    }
}