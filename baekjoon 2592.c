#include <stdio.h>

int main(void)
{
    int sum = 0;
    int avg = 0;
    int max = -1;
    int count;
    int arr[10] = {0, };
    int arr2[105] = {0, };

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
        arr2[arr[i] / 10]++;
    }
    avg = sum / 10;
    for (int i = 0; i < 100; i++)
    {
        if (arr2[i] > max)
        {
            max = arr2[i];
            count = i;
        }
    }
    printf("%d\n%d", avg, count * 10);
}