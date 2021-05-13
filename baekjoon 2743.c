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
    char str[100];
    scanf("%s", str);
    printf("%d", ft_strlen(str));
}