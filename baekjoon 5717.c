#include <stdio.h>

int main(void)
{
    int m, f;
    int friends;

    while (1)
    {
        friends = 0;
        scanf("%d %d", &m, &f);
        if (m == 0 && f == 0)
            break;
        friends = m + f;
        printf("%d\n", friends);
    }
}