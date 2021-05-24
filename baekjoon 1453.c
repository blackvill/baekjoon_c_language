#include <stdio.h>

int main(void)
{
    int com[101] = {0, };
    int n;
    int sit;
    int count = 0;
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &sit);
        if (com[sit] == 1)
            count++;
        com[sit] = 1;
    }
    printf("%d", count);
}