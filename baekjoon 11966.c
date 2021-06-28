#include <stdio.h>

int main(void)
{
    int n, power = 1;
    
    scanf("%d", &n);
    if (n == 1)
    {
        printf("1\n");
        return (0);
    }
    while (power < n)
        power *= 2;
    if (power == n)
        printf("1\n");
    else
        printf("0\n");
}