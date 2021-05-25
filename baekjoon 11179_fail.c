#include <stdio.h>

int base(int num)
{
    long binary = 0;
    long i = 1;
    long sum = 0;

    while(num > 0)
    {
        binary = num % 2;
        sum += binary * i;
        num = num / 2;
        i *= 10;
    }
    return (sum);
}

int reverse_bits(int num)
{
	int sum;
	
	while (num > 0)
	{
	    sum *= 10;
	    sum += num % 10;
	    num /= 10;
	}
	return (sum);
}

int main()
{
    int n;
    long binary = 0;
    long sum;
    int k = 1;

    scanf("%d", &n);
    binary = reverse_bits(base(n));
    while (binary > 0)
    {
        sum += (binary % 2) * k;
        binary /= 10;
        k *= 2;
    }
    printf("%ld", sum);
    printf("\n");
}