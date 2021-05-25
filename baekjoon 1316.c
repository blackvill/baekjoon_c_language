#include <stdio.h>
#include <string.h>

int select(char a[], int len)
{
    int key = 0;

    for(int i = 0; i < len; i++)
    {
        for(int j = 0; j < len; j++)
        {
            if (a[i] == a[j])
            {
                key = j - i;
                if (key > 1)
                {
                    if (a[j - 1] != a[j])
                        return (0);
                }
            }
        }
    }
    return (1);
}

int ft_strlen(char *str)
{
	int len = 0;

	while (str[len])
		len += 1;
	return (len);
}

int main(void)
{
    int n, count = 0;
    char arr[100];
    
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%s", arr);
        count += select(arr, ft_strlen(arr));
    }
    printf("%d", count);
}