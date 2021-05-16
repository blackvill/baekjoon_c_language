#include <stdio.h>

int main(void)
{
    int n;
    int x[100000] = {0, };
    int y[100000] = {0, };
    int small = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
        scanf("%d", &y[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (x[i] > x[j])
                small = j;
            else if (x[i] == x[j])
            {
                if (y[i] > y[j])
                    small = j;
                else
                    small = i;
            }
            else
                small = i;
        }
        printf("%d %d\n", x[small], y[small]);
        x[small] = 100001;
        y[small] = 100001;
    }
}