#include <stdio.h>

int main(void)
{
    int t;
    int n;
    int count;

    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        int arr[100] = {0, };
        count = 0;
        for (int j = 1; j <= n; j++)
        {
            for (int k = 1; k * j <= n; k++)
            {
                if (arr[k * j] == 0)
                    arr[k * j] = 1;
                else if (arr[k *j] == 1)
                    arr[k * j] = 0;
            }
        }
        for (int j = 0; j <= n; j++)
        {
            if (arr[j] == 1)
                count++;
        }
        printf("%d\n", count);
    }
}