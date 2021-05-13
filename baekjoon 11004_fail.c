#include <stdio.h>

int main(void)
{
    int n = 0;
    int k = 0;
    int i = 0;
    int j, temp;
    int arr[5000001] = {0, };

    scanf("%d%d", &n, &k);
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
    printf("%d", arr[k]);
}