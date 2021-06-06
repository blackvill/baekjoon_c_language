#include <stdio.h>

int main()
{
	int c = 0;
    int n = 0;
    int score[1000];
    int sum = 0;
	double avg = 0.00;

	scanf("%d", &c);
	for (int i = 0; i < c; i++)
    {
		scanf("%d", &n);
		for (int j = 0; j < n; j++)
        {
			scanf("%d", &score[j]);
			sum += score[j];
		}
		avg = (double)sum / n;
		int count = 0;
		for (int j = 0; j < n; j++)
        {
			if (avg < score[j])
				count++;
		}
		printf("%.3f%%\n", (double)count * 100 / n);
        sum = 0;
        score[1000] = 0;
	}
}