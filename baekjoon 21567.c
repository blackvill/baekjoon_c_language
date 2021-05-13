#include <stdio.h>

int main(void)
{
    int a, b, c;
    long long result;
    int arr[10] = {0, };
    int i = 0;

    scanf("%d%d%d", &a, &b, &c);
    
    result = a * b * c;
    while (result > 0)
    {
        arr[result % 10] += 1;
        result /= 10;
    }
    while (i < 10)
    {
        printf("%d\n", arr[i]);
        i++;
    }
}