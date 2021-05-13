#include <stdio.h>

int main(void)
{
    int n;
    int arr[101];
    int zero_count = 0;
    int one_count = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            zero_count++;
        else if (arr[i] == 1)
            one_count++;
    }
    if (zero_count > one_count)
        printf("Junhee is not cute!");
    else
        printf("Junhee is cute!");
}