#include <stdio.h>

int main(void)
{
    char str[101];
    int arr[26] = {0, };
    int i = 0;

    scanf("%s", str);
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            arr[str[i] - 'a']++;
        i++;
    }
    i = 0;
    while (i < 26)
        printf("%d ", arr[i++]);
}