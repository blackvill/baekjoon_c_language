#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}

int is_vowel(char c)
{
    if (c == 'a')
        return (1);
    else if (c == 'e')
        return (1);
    else if (c == 'i')
        return (1);
    else if (c == 'o')
        return (1);
    else if (c == 'u')
        return (1);
    else return (0);
}

int main(void)
{
    char str[100];
    int str_len;
    int count = 0;

    scanf("%s", str);
    str_len = ft_strlen(str);
    for (int i = 0; i < str_len; i++)
    {
        if (is_vowel(str[i]))
            count++;
    }
    printf("%d", count);
}