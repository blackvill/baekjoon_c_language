#include <stdio.h>

int main(void)
{
    int n;
    int a[1000000] = {0, };
    int b, c;
    int count = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d %d", &b, &c);
    for (int i = 0; i < n; i++)
    {
        a[i] -= b;
        count += 1;
        while (a[i] > 0)
        {
            a[i] -= c;
            count += 1;
        }
    }
    printf("%d", count);
}