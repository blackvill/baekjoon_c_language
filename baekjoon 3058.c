#include <stdio.h>

int main(void)
{
    int t;
    int arr[7] = {0, };
    int sum;
    int min;

    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        sum = 0;
        min = 100;
        for (int j = 0; j < 7; j++)
        {
            scanf("%d", &arr[j]);
            if (arr[j] % 2 == 0)
            {
                sum += arr[j];
                if (min > arr[j])
                    min = arr[j];
            }
        }
        printf("%d %d\n", sum, min);
    }
}