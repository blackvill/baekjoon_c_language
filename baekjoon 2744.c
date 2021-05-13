#include <stdio.h>

int ft_uppercase(char c)
{
    if (c >= 'A' && c <= 'Z')
        return (1);
    else
        return (0);
}

int ft_lowercase(char c)
{
    if (c >= 'a' && c <= 'z')
        return (1);
    else
        return (0);
}

int main(void)
{
    char str[101];
    int i = 0;

    scanf("%s", str);
    while (str[i])
    {
        if (ft_uppercase(str[i]))
            str[i] += 32;
        else if (ft_lowercase(str[i]))
            str[i] -= 32;
        i++;
    }
    printf("%s", str);
}