#include <stdio.h>

int main(void)
{
    int t;
    int j;
    char str[51];
    int count;

    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        j = 0;
        count = 0;
        scanf("%s", str);
        while (str[j])
        {
            if (str[j] == '(')
                count++;
            if (str[j] == ')' && count > 0)
                count--;
            else if (str[j] == ')' && count <= 0)
            {
                count--;
                break;
            }
            j--;
        }
        if (count == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}