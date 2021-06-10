#include <stdio.h>

int i, j;
char c[1000005] = {'0', '0'};

int main()
{
    scanf("%s", c + 2);
    while (c[i])
        c[i++] -= '0';
    for (j = i % 3; j < i; j += 3)
        printf("%d", c[j]*4 + c[j+1]*2 + c[j+2]);
}