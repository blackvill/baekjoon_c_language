#include <stdio.h>

int is_extroversion(char c)
{
    if (c == 'E')
        return (1);
    else
        return (0);
}

int is_sesation(char c)
{
    if (c == 'S')
        return (1);
    else
        return (0);
}

int is_thinking(char c)
{
    if (c == 'T')
        return (1);
    else
        return (0);
}

int is_judging(char c)
{
    if (c == 'J')
        return (1);
    else
        return (0);
}

int main(void)
{
    char str[4];
    char mbti[4];
    int i = 0;

    scanf("%s", str);
    if (is_extroversion(str[0]))
        mbti[0] = 'I';
    else
        mbti[0] = 'E';
    if (is_sesation(str[1]))
        mbti[1] = 'N';
    else
        mbti[1] = 'S';
    if (is_thinking(str[2]))
        mbti[2] = 'F';
    else
        mbti[2] = 'T';
    if (is_judging(str[3]))
        mbti[3] = 'P';
    else
        mbti[3] = 'J';

    while (i < 4)
    {
        printf("%c", mbti[i]);
        i++;
    }
}