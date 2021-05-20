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
    char str[30] = {0, };
    int len;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf(" %[^\n]", str);
        len = ft_strlen(str);
        if (str[0] >= 'a' && str[0] <= 'z')
                str[0] -= 32;
        printf("%s\n", str);
    }
}