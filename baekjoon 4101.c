#include <stdio.h>

int main(void)
{
    int n1;
    int n2;

    while (1)
    {
        scanf("%d %d", &n1, &n2);
        if (n1 == 0 && n2 == 0)
            break;
        if (n1 > n2)
            printf("Yes\n");
        else
            printf("No\n");
    }
}