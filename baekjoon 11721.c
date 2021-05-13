#include <stdio.h>

int main(void)
{
    char str[101];
    int i = 1;

    scanf("%s", str);
    printf("%c", str[0]);
    while (str[i] != '\0')
    {
        if (i % 10 == 0)
            printf("\n");
        printf("%c", str[i]);
        i++;
    }
}