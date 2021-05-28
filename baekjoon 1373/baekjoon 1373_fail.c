#include <stdio.h>

void base(int n)
{
    if (n != 0)
    {
        base(n / 8);
        printf("%d", n % 8);
    }
}

int rebase(int n)
{
    int sum = 0;
    int k = 1;

    while (n)
    {
        sum += (n % 10) * k;
        n /= 10;
        k *= 2;
    }
    return (sum);
}

int main()
{
    int n;
    int re_n;

    scanf("%d", &n);
    re_n = rebase(n);
    base(re_n);
    printf("\n");
}