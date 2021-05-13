#include <stdio.h>

int what_alphabet(char c)
{
    int time = 0;
    
    if (c >= 'A' && c <= 'C')
        time = 3;
    else if (c >= 'D' && c <= 'F')
        time = 4;
    else if (c >= 'G' && c <= 'I')
        time = 5;
    else if (c >= 'J' && c <= 'L')
        time = 6;
    else if (c >= 'M' && c <= 'O')
        time = 7;
    else if (c >= 'P' && c <= 'S')
        time = 8;
    else if (c >= 'T' && c <= 'V')
        time = 9;
    else if (c >= 'W' && c <= 'Z')
        time = 10;
    else if (c == '0')
        time = 11;
    return (time);
}

int main(void)
{
    char str[16];
    int i = 0;
    int total_time;

    scanf("%s", str);
    while (str[i])
    {
        total_time += what_alphabet(str[i]);
        i++;
    }
    printf("%d", total_time);
}