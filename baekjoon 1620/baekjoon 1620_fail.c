#include <stdio.h>

int main(void)
{
    char str[100000];
    int n;
    int m;
    char input[100000];

    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 20; j++)
            scanf("%s", str[i][j]);
    }
    for (int i = 0; i < m; i++)
    {
        scanf("%s", input);
        if (input >= '0' && input <= '9')
            for (int j = 0; j < 20 ; j++)
                printf("%s", str[input - '0' + 1][j]);
        else
        {
            for (int j = 1; j <= n; j++)
                if (strcmp(str[j][] == input))
                    printf("%d", j)
        }
    }
}

// 느낌은 map, dictionary 써야할 거 같은데 모르겠음...