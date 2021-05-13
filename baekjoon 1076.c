#include <stdio.h>
#include <string.h>

int main(void)
{
    char *color[11] = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"};
    long long value[2][11] = {{0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, {1, 10, 100, 1000, 10000, 100000 ,1000000 ,10000000, 100000000, 1000000000}};
    char input[3][30] = {0, };
    long long last, ans = 0;

    for (int i = 0; i < 3; i++)
        scanf("%s", input[i]);
    for (int i = 0; i < 10; i++)
    {
        if (strcmp(color[i], input[0]) == 0)
            ans += value[0][i] * 10;
        if (strcmp(color[i], input[1]) == 0)
            ans += value[0][i];
        if (strcmp(color[i], input[2]) == 0)
            last = value[1][i];
    }
    printf("%lld\n", ans * last);
}