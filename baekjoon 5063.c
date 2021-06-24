#include <stdio.h>

int main(void)
{
    int t;
    int r, e, c;
    int ad;

    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        ad = 0;
        scanf("%d %d %d", &r, &e, &c);
        ad = e - c;
        if (r < ad)
            printf("advertise\n");
        else if (r > ad)
            printf("do not advertise\n");
        else if (r == ad)
            printf("does not matter\n");
    }
}