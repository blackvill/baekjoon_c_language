#include <stdio.h>

int main(void)
{
    int n = 0;
    int input;
    int check[1001] = {0, };

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &input);
        check[input]++;
    }
    for (int i = 0; i < 1001; i++)
    {
        if (check[i] != 0)
            printf("%d ", i);
    }
    printf("%d");
}