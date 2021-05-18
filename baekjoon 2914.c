#include <stdio.h>

int main(void)
{
    int a;
    int avg_i;
    int songs;

    scanf("%d", &a);
    scanf("%d", &avg_i);
    songs = (a * (avg_i - 1)) + 1;
    printf("%d", songs);
}