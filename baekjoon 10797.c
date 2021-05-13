#include <stdio.h>

int main(void)
{
    int date;
    int car_number[5];
    int count = 0;

    scanf("%d", &date);
    for (int i = 0; i < 5; i++)
        scanf("%d", &car_number[i]);
    for (int i = 0; i < 5; i++)
    {
        if (date == car_number[i])
            count++;
    }
    printf("%d", count);
}