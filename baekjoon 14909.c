#include <stdio.h>

int main(void)
{
    int num;
    int count = 0;
    
    while(scanf("%d", &num) != EOF)
    {
        if (num > 0)
            count++;
    }
    printf("%d", count);
}