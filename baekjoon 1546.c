#include <stdio.h>

int main()
{
	int n, score, max = 0;
	double sum = 0;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &score);
		sum += score;
		if (max < score)
			max = score;
	}
	printf("%lf", (sum / max * 100) / n);
}