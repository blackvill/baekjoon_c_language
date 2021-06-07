#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[255];
    int count;
    
    while (gets(str))
    {
        if (str[0] == '#')
            break;
        count = 0;
        for (int i = 0; i < strlen(str); i++)
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
                count++;
            else if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
                count++;
        }
        printf("%d\n", count);
        str[255] = 0;
    }
}