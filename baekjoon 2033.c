#include <stdio.h>

int main(void)
{
    int n;
    int round = 10;
    int temp;

    scanf("%d", &n);
    while(n / round != 0)
    {
        if (n % round >= 5 * (round / 10))
        {
                n += round * 1;
                temp = (n % round) / (round / 10);
                n -= (temp * (round / 10));
        }
        else
        {
            temp = (n % round) / (round / 10);
            n -= (temp * (round / 10));
        }
        round *= 10;
    }
    printf("%d", n);
}