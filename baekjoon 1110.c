#include <stdio.h>

int main(void)
{
    int n = 0;
    int count = 0;
    int first = 0;
    int last = 0;
    int new = 0;
    int result = 0;

    scanf("%d", &n);
    new = n;
    while (1)
    {
        if (new > 9)
            first = new / 10;
        else
            first = 0;
        last = new % 10;
        result = first + last;
        if (result > 9)
            new = last * 10 + result % 10;
        else
            new = last * 10 + result;
        count++;
        if (new == n)
            break;
    }
    printf("%d", count);
}