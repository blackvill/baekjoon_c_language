#include <stdio.h>

int main(void)
{
	int t, n;
	char s[81];

	scanf("%d", &t);
	while (t-- > 0)
    {
		scanf("%d %s", &n, s);
		s[n - 1] = 0; 
		printf("%s%s\n", s, &s[n]);
    }
}