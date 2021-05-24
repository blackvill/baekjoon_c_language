#include <stdio.h>

int main()

{
    int i;
    char str[101];

    scanf("%[^\n]s", str);
    for(i=0; str[i]!='\0'; i++)
    {
        if ((str[i] >='a' && str[i] <='m') || (str[i] >= 'A' && str[i] <= 'M'))
            printf("%c", (str[i] + 13));
        else if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
            printf("%c", (str[i] - 13));
        else
            printf("%c", str[i]);
    }
}