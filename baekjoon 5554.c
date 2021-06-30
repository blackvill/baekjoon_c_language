#include <stdio.h>

int main(void)
{
    int a, b, c, d;
    // home > school : a, school > pc : b, pc > arcademy : c, arcademy > home : d
    int seconds;
    int minute;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    seconds = a + b + c + d;
    minute = seconds / 60;
    seconds %= 60;
    printf("%d\n%d", minute, seconds);
}