#include <stdio.h>
#include <math.h>

#define max 10000

int arr[max] = {0, };

int main(void)
{
    int t;
    int n;

    for (int i = 2; i <= sqrt(max); i++)
    {
        for (int j = i * i; j <= max; j += i)
        {
            if (arr[j] % i == 0)
                arr[j] = 1;
        }
    }
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        for (int j = n / 2; j > 0; j--)
        {
            if (arr[j] != 1 && arr[n - j] != 1)
            {
                printf("%d %d\n", j, n - j);
                break;
            }
        }
    }
}