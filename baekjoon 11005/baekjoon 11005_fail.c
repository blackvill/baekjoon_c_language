#include <stdio.h>

int main(void)
{
    int n;
    int b;

    scanf("%d %d", &n, &b);
    while (n)
    {
        if ( n % b > 9 && b > 10 )
            printf("%c", 'A' + (n % b) - 10);
        else
            printf("%d", n % b);
        n /= b;
    }
    printf("\n");
}