#include <stdio.h>

int count_factorial(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        int temp=i;
        while (temp % 5 == 0 && temp > 0) {
            count++;
            temp /= 5;
        } 
    }
    return (count);
}
 
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", count_factorial(n));
}
