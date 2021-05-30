#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100] = {0, };
    int check = 0;
    int j = 1;

    scanf("%s", str);
    for (int i = 1; i < strlen(str); i++)
    {
        if (str[i] == ',')
        {
            check += 1;
        }
    }
    printf("%d", check + 1);
}