#include <stdio.h>

int main(void)
{
    char str[100] = {0, };
    char name[100] = {0, };
    int check = 0;
    int j = 1;

    scanf("%s", str);
    name[0] = str[0];
    for (int i = 1; i < strlen(str); i++)
    {
        if (check == 1)
        {
            name[j] = str[i];
            j++;
            check = 0;
        }
        else if (str[i] == '-')
        {
            check = 1;
        }
    }
    printf("%s", name);
}