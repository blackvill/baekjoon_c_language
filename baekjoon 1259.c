#include <stdio.h>

int num_rev(int n)
{
    int reverse = 0;
    int i = 0;
    while (n > 0)
    {
        reverse *= 10;
        reverse += n % 10;
        n /= 10;
    }
    return (reverse);
}

int main(void)
{
    int n;
    int reverse = 0;

    while (1)
    {
        scanf("%d", &n);
        if (n == 0)
            break;
        reverse = num_rev(n);
        if (n == reverse)
            printf("yes\n");
        else
            printf("no\n");
    }
}