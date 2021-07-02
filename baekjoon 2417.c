#include <stdio.h>
#include <math.h>

int main(void)
{
    long long n, m;

    scanf("%lld", &n);
    m = (long long)sqrt(n);
    if (m * m == n)
        printf("%lld\n", m);
    else
        printf("%lld\n", m + 1);
}