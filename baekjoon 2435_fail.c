#include <stdio.h>

int main(void)
{
    int n;
    int k;
    int arr[101] = {0, };
    int i = 0;
    int j;
    int max = 0;
    int check;
    int count;

    scanf("%d%d", &n, &k);
    while (i < n)
    {
        scanf("%d", &arr[i]);
        i++;
    }
    i = 0;
    while (i <= n - k)
    {
        j = i;
        check = 0;
        count = 0;
        while (count < k)
        {
            check += arr[j];
            j++;
            count++;
        }
        if (max < check)
            max = check;
        i++;
    }
    printf("%d", max);
}