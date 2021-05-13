#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

void addStr(char *str, int *n)
{
    int i = 0;
    *n = 0;

    while (str[i])
    {
        *n += str[i] - '0';
        i++;
    }
}

void stoi(char *str, int n)
{
    int i = 0;

    while (n > 0)
    {
        str[i] = (n % 10) + '0';
        n /= 10;
        i++;
    }
    str[i] = '\0';
}

int main()
{
    char str[1000001];
    int x = 0;
    int count = 0;

    scanf("%s", str);
    if (ft_strlen(str) == 1)
        addStr(str, &x);
    else
        x = 10;
    while (ft_strlen(str) != 1)
    {
        addStr(str, &x);
        stoi(str, x);
        count++;
    }
    printf("%d\n", count);
    if (x % 3 == 0)
        printf("YES");
    else
        printf("NO");
}