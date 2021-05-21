#include <stdio.h>

long long a[1000000];
long long b[1000000];

int main()
{
    int n, m;
    int a_count = 0;
    int b_count = 0;

    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
        scanf("%lld", &a[i]);
    for (int i = 0; i < m; i++)
        scanf("%lld", &b[i]);
    while (1)
    {
        if (a_count == n || b_count == m)
            break;
        if (a[a_count] == b[b_count])
            printf("%lld %lld ", a[a_count++], b[b_count++]);
        else if (a[a_count] < b[b_count])
            printf("%lld ", a[a_count++]);
        else
            printf("%lld ", b[b_count++]);
    }
    while (a_count != n)
        printf("%lld ", a[a_count++]);
    while (b_count != m)
        printf("%lld ", b[b_count++]);
    printf("\n");
}