#include <stdio.h>

int top = -1;
int base[100001];

void push(int num)
{
    if (top > 100000)
        return;
    base[++top] = num;
}

void pop()
{
    if (top < 0)
        return;
    base[top--] = 0;
}

int main(void)
{
    int n;
    int num;
    int i = 0;
    int result = 0;

    scanf("%d", &n);
    while (n--)
    {
        scanf("%d", &num);
        if (num == 0)
            pop();
        else
            push(num);
    }
    while (i <= top)
    {
        result += base[i];
        i++;
    }
    printf("%d", result);
}