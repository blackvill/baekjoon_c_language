#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare(const void* first, const void* second) // 퀵소팅에 사용될 compare
{
	int* a = (int*)first;
	int* b = (int*)second;

	if (*a < *b)
		return (-1);
	else if (*a > *b)
		return (1);
	else
		return (0);
}

int arith(int list[], int n) // 산술평균
{
	double sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += (list[i]);
	}
	return (round(sum / n));
}

/* 산술평균 2번째의 방법
int arith(int list[], int n)
{
	double sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += (list[i]);
	}
	sum /= n;
	if (sum < 0)
		sum -= 0.5;
	else
		sum += 0.5;

	return (int)sum;
}
*/

/* 산술평균 3번째 방법
void arith(int list[], int n)
{
	double sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += (list[i]);
	}

	printf("%.0f\n", sum / n);
}
*/

int median(int list[], int n) // 중앙값
{
	if (n == 1)
		return (list[0]);
	else
		return (list[(n + 1) / 2 - 1]);
}

int Mode(int list[], int n) // 빈도
{
	int ar[8001] = { 0 };
	int i, idx, max = 0, cnt = 0;

	for (i = 0; i < n; i++)
	{
		idx = list[i] + 4000;
		ar[idx] += 1;
		if (ar[idx] > max)
			max = ar[idx];
	}
	for (i = 0, idx = 0; i < 8001 ; i++)
	{
		if (ar[i] == 0)
			continue;
		if (ar[i] == max)
		{
			if (cnt == 0)
			{
				idx = i;
				cnt += 1;
			}
			else if (cnt == 1)
			{
				idx = i;
				break;
			}
		}
	}
	return (idx - 4000);
}

int range(int list[], int n) // 범위
{
	int max = list[n - 1];
	int min = list[0];

	return (max - min);
}

int main()
{
	int i, n;
	int* list;

	scanf("%d", &n);
	list = (int*)calloc(n, sizeof(int));
	for (i = 0; i < n; i++)
		scanf(" %d", &list[i]);
	qsort(list, n, sizeof(list[0]), compare); //퀵소팅
	printf("%d\n", arith(list, n));
	printf("%d\n", median(list, n));
	printf("%d\n", Mode(list, n));
	printf("%d\n", range(list, n));
}

//reference - https://sedangdang.tistory.com/19