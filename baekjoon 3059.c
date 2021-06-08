#include <stdio.h>
#include <string.h>

int main(void)
{
    int t, sum;
    char s[1000]; 
    
    scanf("%d", &t);
    while (t--)
    {
        char check[26] = {0, };
        scanf("%s", s);
        sum = 0;
        for (int i = 0; i < strlen(s); i++)
            check[s[i] - 'A'] = 1;
        for (int i = 0; i < 26; i++)
            if (check[i] == 0)
                sum += (i + 65); 
        printf("%d\n", sum);
    }
}