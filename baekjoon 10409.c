#include <stdio.h>

int main(void)
{
    int n, t;
    int arr[50];
    int count = 0;

    scanf("%d %d", &n, &t);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (t - arr[i] >= 0)
        {
            t -= arr[i];
            count++;
        }
        else
            break;
    }
    printf("%d", count);
}