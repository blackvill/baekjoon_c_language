#include <stdio.h>

int main(void)
{
    int count, size;
    int arr[5];
    int sang = 0;

    scanf("%d %d", &count, &size);
    sang = count * size;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        printf("%d ", arr[i] - sang);
    }
}