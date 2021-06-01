#include <stdio.h>

int greatest_deneminator(int a, int b)
{
    if (b == 0)
        return a;
    greatest_deneminator(b, a % b);
}

int main()
{
    int a, b;
    int num = 0;
    
    scanf("%d %d", &a, &b);
    num = greatest_deneminator(a, b);
    printf("%d\n%d", num, (a * b) / num);
}