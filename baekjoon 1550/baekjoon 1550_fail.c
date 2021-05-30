#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[6] = {0, };

    scanf("%s", str);
    for (int i = 0 ; i < strlen(str); i++)
    {
        if (str[i] >= 0 && str[i] <= 9)
            printf("%d", str[i] - '0');
        else if (str[i] >= 'A' && str[i] <= 'F')
            printf("%d", str[i] - 'A' + 10);
    }
}