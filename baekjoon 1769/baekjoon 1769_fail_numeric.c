#include <stdio.h>

int main(void)
{
    int x;
    int trans;
    int count;

    scanf("%d", &x);
    while (x > 9)
    {
        trans = 0;
        while (x > 0)
        {
            trans = trans + (x % 10);
            x /= 10;
        }
        x = trans;
        count++;
    }
    printf("%d\n", count);
    if (x % 3 == 0)
        printf("YES");
    else
        printf("NO");
}