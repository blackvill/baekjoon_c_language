#include <stdio.h>

int main(void)
{
    int sum;
    int avg;
    int temp;
    int arr[5]= {0, };

    for (int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++)
        sum += arr[i];
    avg = sum / 5;
    printf("%d\n%d", avg, arr[2]);
}