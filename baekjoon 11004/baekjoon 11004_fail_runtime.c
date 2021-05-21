#include <stdio.h>

long long a[5000000];

int main(void)
{
    int n;
    int k;
    int tmp;

    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < k; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = a[i];
            }
        }
    }
    printf("%d", a[k]);
}