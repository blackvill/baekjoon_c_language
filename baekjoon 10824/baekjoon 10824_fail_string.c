#include <stdio.h>

int main(void)
{
    int a, b, c, d;
    long long ab = 0, cd = 0;
    long long sum;
    int count = 1;

    scanf("%d %d %d %d", &a, &b, &c, &d);
    ab += b;
    cd += d;
    while(b != 0)
    {
        b = b / 10;
        count *= 10;
    }
    ab += (a * count);
    count = 1;
    while(d != 0)
    {
        d = d / 10;
        count *= 10;
    }
    cd += (c * count);
    sum = ab + cd;
    printf("%lld", sum);
}