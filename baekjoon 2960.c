#include<stdio.h>

int main()
{
    int n;
    int k;
    int count;
    int count2 = 0;
    int a, b; 
    int arr[1005] = { 0, };

    scanf("%d %d", &n, &k);
    count = n - 1;
    for (int i = 2; i <= n; i++)
    {
        arr[i - 2] = i;
    }
    while (1)
    {
        if (count <= 0 || count2 == k)
        {
            break;
        }
        for (int i = 0; i < count; i++)
        {
            if (arr[i] != 0)
            {
                a = arr[i];
                break;
            }
        }
        for (int i = 0; i < count; i++)
        {
            if (arr[i] % a==0 && arr[i]!=0)
            {
                count2++;
                if (count2 == k)
                {
                    b = arr[i];
                    break;
                }
                arr[i] = 0;
            }
        }
    }
    printf("%d", b);
}