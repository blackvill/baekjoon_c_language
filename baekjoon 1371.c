#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[5001];
    char alphabet[26] = {0, };
    int  count = 0;

    while (gets(str))
    {
        for (int i = 0 ; str[i]; i++)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                alphabet[str[i] - 'a']++;
                if (alphabet[str[i] - 'a'] > count)
                    count = alphabet[str[i] - 'a'];
            }
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (alphabet[i] == count && alphabet[i] != 0)
            printf("%c", 'a' + i);
    }
}