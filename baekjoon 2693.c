#include <stdio.h>

int main(void)
{
    int t;
    int arr[10];
    int temp = 0;

    scanf("%d", &t);
    while (t--)
    {
        for (int i = 0; i < 10; i++)
            scanf("%d", &arr[i]);
        for (int i = 0; i < 9; i++)
        {
            for (int j = i + 1; j < 10; j++)
            {
                if (arr[i] < arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        printf("%d\n", arr[2]);
    }
}