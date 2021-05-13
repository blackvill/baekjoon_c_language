#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int arr[1000];
    int i = 0;
    int j = 1;
    int count = 0;
    int sum = 0;

    scanf("%d", &a);
    scanf("%d", &b);
    while (i < 1000)
    {
        arr[i] = j;
        count++;
        if (j == count)
        {
            j++;
            count = 0;
        }
        i++;
    }
    while (a <= b)
    {
        sum += arr[a-1];
        a++;
    }
    printf("%d", sum);
}