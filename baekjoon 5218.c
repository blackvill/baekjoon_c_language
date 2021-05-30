#include <stdio.h>

int main(void)
{
    int n;
    char str[20] = {0, };
    char comp[20] = {0, };
    int distance = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s %s", str, comp);
        printf("Distances:");
        for (int j = 0; j < strlen(str); j++)
        {
            if (comp[j] - str[j] >= 0)
                distance = comp[j] - str[j];
            else
                distance = 26 - (str[j] - comp[j]);
            printf(" %d", distance);
        }
        printf("\n");
    }
}