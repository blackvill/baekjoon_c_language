#include <stdio.h>

int main(void)
{
    int t;
    int h, w, n;
    
    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        scanf("%d %d %d", &h, &w, &n);
        if(n % h == 0)
            printf("%d%02d\n", h, n / h);
        else
            printf("%d%02d\n", n % h, n / h + 1);
    }
}