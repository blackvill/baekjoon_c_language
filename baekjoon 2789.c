#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];
    char printstr[100];
    int j = 0;

    scanf("%s", str);
    for (int i = 0 ; i < strlen(str); i++)
    {
        if (str[i] == 'C' || str[i] =='A' || str[i] =='M' || str[i] =='B' || str[i] =='R' || str[i] =='I' || str[i] =='D' || str[i] =='G' || str[i] =='E' )
            continue;
        else
            printf("%c", str[i]);
    }

}