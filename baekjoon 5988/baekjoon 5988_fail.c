#include <stdio.h>

int main(void)
{
    int n;
    int num;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        if (num % 2 == 1)
            printf("odd\n");
        else
            printf("even\n");
    }
}