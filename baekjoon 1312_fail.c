#include <stdio.h>

int main(void)
{
    int a;
    int b;
    double c;
    int n;
    int i = 1;

    scanf("%d %d %d", &a, &b, &n);
    c = (double)a / b;
    while (n)
    {
        i *= 10;
        n--;
    }
    printf("%d", (int)(c * i) % 10);
}