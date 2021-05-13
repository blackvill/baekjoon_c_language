#include <stdio.h>

int main(void)
{
    char chess[8][8];
    int count = 0;

    for (int i = 0; i < 8; i++)
    {
        scanf("%s", chess[i]);
    }
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if ((i % 2 == 0) && (j % 2 == 0))
            {
                if (chess[i][j] == 'F')
                    count++;
            }
            else if ((i % 2 == 1) && (j % 2 == 1))
            {
                if (chess[i][j] == 'F')
                    count++;
            }
        }
    }
    printf("%d", count);
}