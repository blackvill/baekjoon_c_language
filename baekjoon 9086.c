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
    int n;
    char str[10] = {0, };
    int len;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf(" %s", str);
        len = ft_strlen(str);
        printf("%c%c\n", str[0], str[len - 1]);
    }
}