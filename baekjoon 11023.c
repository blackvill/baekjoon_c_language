#include <stdio.h>

int main(void)
{
	int num = 0, sum = 0;

	while(scanf("%d", &num) != EOF)
		sum += num;
	printf("%d", sum);
}