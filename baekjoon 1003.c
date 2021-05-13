#include <stdio.h>

int fibonacci(int n)
{
    int last, result = 0;
    int current = 1;

    for (int i = 0; i <= n; i++)
    {
        last = current;
        current = result;
        result = last + current;
    }
    printf("%d %d\n", last, current);
}

int main(void)
{
    int n, m;
    int i;

    scanf("%d", &n);
    while (i < n)
    {
        scanf("%d", &m);
        fibonacci(m);
        i++;
    }
}