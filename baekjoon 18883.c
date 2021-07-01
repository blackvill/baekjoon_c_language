#include <stdio.h>

int main(void)
{
    int n, m;
    int num = 1;

    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d", num);
            if (j < m - 1)
                printf(" ");
            num++;
        }
        printf("\n");
    }
}