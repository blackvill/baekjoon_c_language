#include <stdio.h>

int a[1000000];

int main(void)
{
    int n, b, c;
    int temp1 = 0, temp2 = 0, temp = 0;
    long long total = 0;
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d %d", &b, &c);
    total = n;
    for (int j = 0; j < n; j++)
    {
        temp = a[j] - b;
        if (temp > 0)
        {
            temp1 = temp / c;
            temp2 = temp % c;

            if (temp2 > 0)
                temp2 = 1;
            total += temp1 + temp2;
        }
    }
    printf("%lld\n", total);
}

//reference - https://icanyoucanwecan.tistory.com/107