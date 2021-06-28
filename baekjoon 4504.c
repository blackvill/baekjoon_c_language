#include <stdio.h>

int main(void)
{
    int n;
    int list;

    scanf("%d", &n);
    while (1)
    {
        scanf("%d", &list);
        if (list == 0)
            break;
        if (list % n == 0)
            printf("%d is a multiple of %d.\n", list, n);
        else
            printf("%d is NOT a multiple of %d.\n", list, n);
    }
}