#include <stdio.h>

int main(void)
{
    int n = 0;
    int arr[10001];
    int i = 0;
    int j;
    int temp;

    scanf("%d", &n);
    while (i < n)
    {
        scanf("%d", &arr[i]);
        i++;
    }
    i = 0;
    while (i < n)
    {
        j = i + 1;
        while (j < n)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            j++;
        }
        i++;
    }
    i = 0;
    while (i < n)
        printf("%d\n", arr[i++]);
}