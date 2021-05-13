#include <stdio.h>

int main(void)
{
    int arr[26];
    char str[100] = {0, };
    int i = 0;

    scanf("%s", str);
    
    while (i < 26)
        arr[i++] = -1;
    
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            if (arr[str[i] - 97] == -1)
                arr[str[i] - 97] = i;
        }
        i++;
    }
    
    i = 0;
    while (i < 26)
        printf("%d ", arr[i++]);
}