#include<stdio.h>
#include<string.h>

int main(void)
{
	char S[101];
	char *ptr;
	int sum = 0;

	scanf("%s", S);
	ptr = strtok(S, ",");
	while (ptr != NULL)
    {
		sum = sum + atoi(ptr);
		ptr = strtok(NULL, ",");
	}
	printf("%d", sum);
}