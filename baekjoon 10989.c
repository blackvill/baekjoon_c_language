#include <stdio.h>

int main(void)
{
    int n = 0;
    int num = 0;
    int i = 0;
    int j;
    int arr[10001] = {0, };

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        arr[num]++;
    }
    for (int i = 0; i <= 10000; i++)    
    {
        if (arr[i] == 0)
            continue ;
        for (int j = 0; j < arr[i]; j++)
        {
            printf("%d\n", i);
        }
    }
}