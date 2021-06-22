#include <stdio.h>

int main(void)
{
    int n;
    int score_song;
    int p;
    int score[51];
    int rank = 1, p_song = 1;

    scanf("%d %d %d", &n, &score_song, &p);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &score[i]);
        if (score[i] > score_song)
            rank++;
        if (score[i] >= score_song)
            p_song++;
    }
    if (rank > p)
        printf("-1");
    else if (p_song > p)
        printf("-1");
    else
        printf("%d", rank);
}