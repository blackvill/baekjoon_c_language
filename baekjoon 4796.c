#include <stdio.h>

int main(void)
{
    int l, p, v;
    int i = 1;
    int remain;

    while (1)
    {
        scanf("%d %d %d", &l, &p, &v);
        if (l == 0 && p == 0 && v == 0)
            break;
        remain = (v / p) * l;
        v = v % p;
        if (l >= v % p)
            printf("Case %d: %d\n", i, remain + v);
        else if (l < v % p)
            printf("Case %d: %d\n", i, remain + l);
        i++;
    }
}

/*==================================
위를 삼항 연산자로 풀었을 때

#include <stdio.h>

int main(void)
{
    int l, p, v;
    int i = 1;
    int remain;

    while (1)
    {
        scanf("%d %d %d", &l, &p, &v);
        if (l == 0 && p == 0 && v == 0)
            break;
        remain = (v / p) * l;
        v = v % p;
        remain += v < l ? v : l;
        printf("Case %d: %d\n", i, remain);
        i++;
    }
}
====================================*/