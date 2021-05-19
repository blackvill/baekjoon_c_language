#include <stdio.h>
 
int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}

int main()
{
    int n;
    int len;
    char arr[61];
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", arr);
        len = ft_strlen(arr);
        if (arr[len - 1] % 2 == 1)
            printf("odd\n");    
        else
            printf("even\n");
    }
}