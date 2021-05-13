#include <stdio.h>

void sort(int arr[], int num)
{
    int i = 0;
    int j;
    int temp;
    int max;

    while (i < num)
    {
        max = i;
        j = i;
        while (j < num)
        {
            if (arr[max] > arr[j])
                max = j;
            j++;
        }
        temp = arr[i];
        arr[i] = arr[max];
        arr[max] = temp;
        i++;
    }
}

int main(void)
{
    int n;
    int arr[51];
    int i = 0;

    scanf("%d", &n);
    while (i < n)
    {
        scanf("%d", &arr[i]);
        i++;
    }
    sort(arr, n);
    printf("%d", arr[0] * arr[n-1]);
}