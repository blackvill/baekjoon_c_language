#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}

int main(void)
{
    int t;
    int n;
    char str[10] = {0, };
    int len;

    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %s", &n, str);
        len = ft_strlen(str);
        for (int j = 0; j < len; j++)
        {
            if (j != n - 1)
                printf("%c", str[j]);
        }
        printf("\n");
    }
}