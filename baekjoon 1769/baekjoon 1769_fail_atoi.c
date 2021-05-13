#include <stdio.h>
#include <string.h>

int ft_atoi(char *str)
{
    int num;

	num = 0;
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		str += 1;
	}
	return (num);
}

int main(void)
{
    char str[1000001];
    int x;
    int trans;
    int count;

    scanf("%s", str);
    x = ft_atoi(str);
    while (x > 9)
    {
        trans = 0;
        while (x > 0)
        {
            trans = trans + (x % 10);
            x /= 10;
        }
        x = trans;
        count++;
    }
    printf("%d\n", count);
    if (x % 3 == 0)
        printf("YES");
    else
        printf("NO");
}