#include <stdio.h>

int main(void)
{
    int n;
    char str1[100001];
    char str2[100001];
    int i = 0;
    int sum = 0;

    scanf("%d", &n);

    while (i < n)
    {
        scanf("%c", &str1[i]);
        i++;
    }
    i = 0;
    while (i < n)
    {
        scanf("%c", &str2[i]);
        i++;
    }
    i = 0;
    while (i < n)
    {
        if (str1[i] != str2[i])
            sum++;
    }
    printf("%d", sum);
}

JASIOJESTDYSLEKTYKIEM
JAsIOJSSTDXSIEKTYKLEM