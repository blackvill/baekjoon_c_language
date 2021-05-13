#include <stdio.h>

long long min(long long x, long long y)
{
    return x > y ? y : x;
}

long long max(long long x, long long y)
{
    return x > y ? x : y;
}

int main()
{
    long long x,y,w,s;
    long long res;
    long long maxdiagonal;
    long long mod;
    long long mindiagonal;
    long long remainderx;
    long long remaindery;

    scanf("%lld%lld%lld%lld", &x, &y, &w, &s);
    res = (x + y) * w;
    maxdiagonal = max(x, y);
    mod = (x + y) % 2;
    res = min(res, (maxdiagonal - mod) * s + mod * w);
    mindiagonal = min(x, y);
    remainderx = x - mindiagonal;
    remaindery = y - mindiagonal;
    res = min(res, mindiagonal * s + (remainderx + remaindery) * w);
    printf("%lld", res);
}