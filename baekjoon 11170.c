#include <stdio.h>

int pow(int n, int p)
{
	int result = 1;

	for (int i = 0; i < p; i++)
		result *= n;
	return (result);
}

int slowCountZero(int n) 
{
	int cnt = 1;
    int temp;
	
	for (int i = 10; i <= n; i++)
    {
		temp = i;
		while (temp > 0)
        {
			if (temp % 10 == 0)
				cnt++;
			temp /= 10;
		}
	}
	return (cnt);
}

int countZero(int n)
{
	int subsum[7] = { 1, 9, 180, 2700, 36000, 450000, 5400000 };
	int sum[7] = { 1, 10, 190, 2890, 38890, 488890, 5888890 };
	int result = 0;
	int temp = n;
	int digit = 0;

	if (n < 0)
		return (0);
	while (temp > 0)
    {
		if (temp % 10)
			result += pow(10, digit);
		else 
			result += n%pow(10, digit) + 1;	
		result += subsum[digit++] / 9 * (temp % 10);
		temp /= 10;
	}
	if (digit >= 2)
		result -= (subsum[digit - 1] / 9 - sum[digit - 2]) + pow(10, digit - 1);
	return (result ? result : 1);
}
int main()
{
	int T, a, b;

	scanf("%d", &T);
	while (T--)
    {
		scanf("%d %d", &a, &b);
		printf("%d\n", countZero(b) - countZero(a - 1));
	}
}