#include <stdio.h>

int sort_count(int n, int arr[])
{
    int temp;
    int count = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp       = arr[j];
                arr[j]     = arr[j + 1];
                arr[j + 1] = temp;
                count++;
            }
        }
    }
    return (count);
}
int main(void)
{
    int n = 0;
    int *arr;
    int count;

    scanf("%d", &n);
    arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    count = sort_count(n, arr);
    printf("%d\n", count);
    free(arr);
}