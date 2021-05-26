#include <stdio.h>

int main(void)
{
    int count = 0;
    int money = 0;
    int re_money = 0;

    scanf("%d", &money);
    re_money = 1000 - money;
    while (re_money > 0)
    {
        if (re_money >= 500)
        {
            re_money -= 500;
            count++;
        }
        else if (re_money >= 100)
        {
            re_money -= 100;
            count++;
        }
        else if (re_money >= 50)
        {
            re_money -= 50;
            count++;
        }
        else if (re_money >= 10)
        {
            re_money -= 10;
            count++;
        }
    }
    printf("%d", count);
}