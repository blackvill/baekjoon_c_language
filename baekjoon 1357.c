#include <stdio.h>

int rev(int n)
{
    int rev_num = 0;

    while (n > 0)
    {
        rev_num *= 10;
        rev_num += n % 10;
        n /= 10;
    }
    return (rev_num);
}

int main(void)
{
    int x, y;
    int rev_x;
    int rev_y;

    scanf("%d %d", &x, &y);
    rev_x = rev(x);
    rev_y = rev(y);
    printf("%d", rev(rev_x + rev_y));
}