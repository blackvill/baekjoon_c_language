#include <stdio.h>

int a[5000001];

void ft_swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int low, int high)
{
    int i, j, p;
    p = a[(low + high) / 2];
    i = low - 1;
    j = high + 1;

    while(1)
    {
        while(a[++i] < p);
        while(p < a[--j]);
        if (i >= j)
            break;
        ft_swap(&a[i], &a[j]);
    }
    return (i);
}

int qsearch(int low, int high, int k)
{
    int i, j, p;

    if (low == high)
        return (a[low]);
    i = low - 1;
    j = high + 1;
    p = a[(low + high) / 2];
    while(1)
    {
        while(a[++i] < p);
        while(p < a[--j]);
        if (i >= j)
            break;
        ft_swap(&a[i], &a[j]);
    }
    if (i == j && i == k)
        return (p);
    if (k < i)
        return (qsearch(low, i - 1, k));
    else
        return (qsearch(j + 1, high, k));
}

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++)
        scanf("%d", a + i);
    printf("%d\n", qsearch(0, n - 1, k - 1));
}