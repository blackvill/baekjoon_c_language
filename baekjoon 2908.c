#include <stdio.h>

int main(void)
{
    int a, b;
    int re_a, re_b = 0;

    scanf("%d%d", &a, &b);
    re_a = a/100 + ((a/10)%10)*10 + ((a%100)%10)*100;
	re_b = b/100 + ((b/10)%10)*10 + ((b%100)%10)*100;
    if (re_a > re_b)
        printf("%d", re_a);
    if (re_a < re_b)
        printf("%d", re_b);
}