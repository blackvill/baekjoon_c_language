#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    char arr[100];
    int len, sum = 0;
    int n;
    
    scanf("%s", arr);
    scanf("%d", &n);
    len = strlen(arr);
    for (int i = len - 1; i >= 0; i--)
    {
        if (arr[i] >= '0' && arr[i] <= '9')
            sum += pow(n, len - 1 - i)*(int)(arr[i] - '0');
        else
            sum += pow(n, len - 1 - i)*(int)(arr[i] - 'A' + 10);
    }
    printf("%d", sum);
}