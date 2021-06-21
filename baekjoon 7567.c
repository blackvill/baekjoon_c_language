#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[50];
    int flag = 0;
    int height = 10;

    scanf("%s", str);
    if (str[0] == '(')
        flag = 1;
    else if (str[0] == ')')
        flag = 2;
    for (int i = 1; i < strlen(str); i++)
    {
        if (flag == 1 && str[i] == '(')
        {
            height += 5;
        }
        else if (flag == 2 && str[i] == ')')
        {
            height += 5;
        }
        else if (flag == 1 && str[i] == ')')
        {
            flag = 2;
            height += 10;
        }
        else if (flag == 2 && str[i] == '(')
        {
            flag = 1;
            height += 10;
        }
    }
    printf("%d", height);
}