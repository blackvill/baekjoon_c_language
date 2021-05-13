#include <stdio.h>

int main(void)
{
    int t, n;
    for (scanf("%d", &t); t--; )
    {
        scanf("%d", &n);
        int arr[101] = {0};
        int count = 0;
        for(int i = 1; i <= n; i++)
            for(int j = i; j <= n; j += i)
                arr[j] = !arr[j];
        for(int i=1; i <= n; i++)
            count += arr[i];
        printf("%d\n", count);
    }
}