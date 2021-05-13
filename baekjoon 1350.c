#include <stdio.h>

int main(void)
{
    int n;
    long long cluster, ans, count = 0;

    scanf("%d", &n);
    long long file_size[n];

    for (int i = 0; i < n; i++)
        scanf("%lld", &file_size[i]);
    scanf("%lld", &cluster);

    for (int i = 0; i < n; i++)
    {
        if (file_size[i] > 0 && file_size[i] <= cluster)
            count++;
        else if (file_size[i] > cluster)
        {
            if (file_size[i] % cluster == 0)
                count += file_size[i] / cluster;
            else
                count += (file_size[i]/cluster) + 1;
        }
    }
    ans = cluster * count;
    printf("%lld\n", ans);
}