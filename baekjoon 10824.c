#include <stdio.h>
 
int main()
{     
    char arr[101];
    long long a,b,c,d;
    long long A,B;

    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    sprintf(arr, "%lld%lld %lld%lld", a, b, c, d);
    sscanf(arr, "%lld %lld", &A, &B);
    printf("%lld\n", A + B);
}

//reference - https://browoo.tistory.com/22