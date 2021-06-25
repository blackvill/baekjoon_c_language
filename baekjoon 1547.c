#include <stdio.h>

int main(void)
{
    int m;
    int location = 1;
    int x, y;

    scanf("%d", &m);
    for (int k = 0; k < m; k++)
    {
        scanf("%d %d", &x, &y);
        if (location == x)
            location = y;
        else if (location == y)
            location = x;
    }
    printf("%d", location);
}