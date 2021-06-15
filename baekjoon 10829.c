#include <stdio.h>

void tobinary(long long n)
{
    if (n != 1)
        tobinary(n / 2);
    printf ("%d", n % 2);
}

int main(void)
{
    long long n;
    
    scanf("%lld", &n);
    tobinary(n);
}