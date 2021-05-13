#include <stdio.h>

int main()
{
    int n;
    int arr[100001];
    int x;
    int y;
    int count = 0;

	scanf("%d", &n);
	while (n--)
    {
		scanf("%d.%d", &x, &y);
		arr[x * 1000 + y]++;
	}
	for (int i = 0; i <= 100000; i++)
    {
		while (arr[i])
        {
            --arr[i];
            ++count;
			printf("%d.%03d\n", i / 1000, i % 1000);
			if (count == 7)
                return (0);
		}
	}
}