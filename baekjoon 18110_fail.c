#include <stdio.h>
#include <math.h>

int main(void)
{
    int n;
    int arr[300000] = {0, };
    int exept;
    int temp = 0;
    int sum = 0;
    int count = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    exept = ceil(n * 0.15);
    printf("%d\n", exept);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = arr[i];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    for (int i = exept; i < n - exept; i++)
    {
        sum += arr[i];
        count++;
    }
    printf("\n%0.0f", floor(sum / count + 0.5));
}