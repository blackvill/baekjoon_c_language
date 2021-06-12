#include <stdio.h>

int gcd(int a, int b) // 최대공약수
{
    int mod = 0;
    while (mod = a % b)
    {
        a = b;
        b = mod;
    }
    return (b);
}

int main()
{
    int t;
    
    scanf("%d", &t);
    while(t--)
    {
        int A, B;

        scanf("%d %d", &A, &B);
        printf("%d\n", A * B / gcd(A, B));
    }
}