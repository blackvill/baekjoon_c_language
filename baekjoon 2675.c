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
    int r;
    char str[20];
    int str_len;

    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &r);
        scanf("%s", str);
        str_len = ft_strlen(str);
        for (int j = 0; j < str_len; j++)
        {
            for (int k = 0; k < r; k++)
                printf("%c", str[j]);
        }
        printf("\n");
    }
}