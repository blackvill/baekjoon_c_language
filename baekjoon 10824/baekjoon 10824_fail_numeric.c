#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char a[1000000], b[1000000], c[1000000], d[1000000];
    long long ab = 0, cd = 0;
    long long sum;

    scanf("%s %s %s %s", a, b, c, d);
    ab = atoi(strcat(a, b));
    cd = atoi(strcat(c, d));
    sum = ab + cd;
    printf("%lld", sum);
}