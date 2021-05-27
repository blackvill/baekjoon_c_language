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
    char str[999] = {0, };
    char doc[999] = {0, };
    int count = 0;

    scanf("%s", str);
    scanf("%s", doc);
    for (int i = 0; i < ft_strlen(str); i++)
    {
        count++;
    }
    for (int i = 0; i < ft_strlen(doc); i++)
    {
        count--;
    }
    if (count >= 0)
        printf("go\n");
    else
        printf("no\n");
}