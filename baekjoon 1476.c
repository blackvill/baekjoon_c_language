#include <stdio.h>

int main(void)
{
    int e, s, m;
    int year = 1;
    int result;

    scanf("%d%d%d", &e, &s, &m);
    while (1)
    {
        if ((year - e) % 15 == 0 &&(year - s) % 28 == 0 &&(year - m) % 19 == 0)
        {
            result = year;
            break;
        }
        year++;
    }
    printf("%d", year);
}