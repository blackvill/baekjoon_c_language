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

        scanf("%d%d", &A, &B);
        printf("%d %d\n", A * B / gcd(A, B), gcd(A, B));
        // 최대공약수 = G
        // 최소공배수 = L = G * a * b
        // A * B = L * G
        // 최소공배수 * 최대공약수 = A * B
        // 즉, A x B 를 최소공배수로 나눠주면 최소 공배수가 나온다
    }
}