#include <stdio.h>

int compare(const void *a, const void *b)
{
    if (*(int*)a > *(int*)b)
    {
        return 1;
    }
    else if (*(int*)a < *(int*)b)
    {
        return -1;
    }
    else
        return 0;
}

int main(void)
{
    int n = 0;
    int *arr;

    scanf("%d", &n);
    arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    qsort(arr, n, sizeof(int), compare);
    for (int i = 0; i < n; i++)
        printf("%d\n", arr[i]);
    free(arr);
}