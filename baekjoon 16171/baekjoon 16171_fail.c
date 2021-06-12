#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];
    char ori[100];
    char k[100];
    int flag = 0;
    int j = 0;
    int t = 0;

    scanf("%s", str);
    scanf("%s", k);
    for (int i = 0; i < strlen(str); i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            ori[j] = str[i];
            j++;
        }
    }
    for (int i = 0; i < strlen(ori); i++)
    {
        t = i;
        if (ori[t] == k[0])
        {
            for (j = 0; j < strlen(k); j++)
            {
                if (k[j] != ori[t])
                {
                    flag = 0;
                    break;
                }
                else
                    flag = 1;
                t++;
            }
        }
    }
    if (flag == 1)
        printf("1");
    else if (flag == 0)
        printf("0");
}