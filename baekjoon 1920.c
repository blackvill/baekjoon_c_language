#include <stdio.h>
#include <stdlib.h>

int bin_search(const int a[], int n, int key)
{
	int pl = 0;
	int pr = n - 1;

	do
    {
		int pc = (pl + pr) / 2;

		if (a[pc] > key)
			pr = pc - 1;
		else if (a[pc] < key)
			pl = pc + 1;
		else
			return (1);
	} while(pl <= pr);
	return (0);
}

int int_cmp(const int *a, const int *b)
{
	if(*a < *b)
		return (-1);
	else if(*a > *b)
		return (1);
	else
		return (0);
}

int main(void)
{
	int i;
	int n, m;
	int *a, *b;

	scanf("%d", &n);
	a = (int*)calloc(n, sizeof(int));
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	scanf("%d", &m);
	b = (int*)calloc(m, sizeof(int));
	for (i = 0; i < m; i++)
		scanf("%d", &b[i]);
	qsort(a, n, sizeof(int), (int(*)(const void *, const void *))int_cmp);
	for (i = 0; i < m; i++)
		printf("%d\n", bin_search(a, n, b[i]));
}

// reference - https://gogojung.tistory.com/15