#include <stdio.h>

int main(void)
{
    int arr[7] = {0, };
    int min = 100;
    int sum = 0;

    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] % 2 == 1)
        {
            sum += arr[i];
            if (min > arr[i])
                min = arr[i];
        }
    }
    if (min % 2 != 1)
        printf("-1");
    else
        printf("%d\n%d", sum, min);
}