#include <stdio.h>

int main(void)
{
    int arr[26] = {0, };
    char str[1000000] = {0, };
    int i = 0;
    int max = 0;
    int same = 0;
    int result = 0;

    scanf("%s", str);
    
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            arr[str[i] - 65] += 1;
        if (str[i] >= 'a' && str[i] <= 'z')
            arr[str[i] - 97] += 1;
        i++;
    }
    i = 0;
    max = arr[0];
    while (i < 26)
    {
        if (max < arr[i])
        {
            max = arr[i];
            result = i;
        }
        i++;
    }
    i = 0;
    while (i < 26)
    {
        if (max == arr[i])
            same++;
        i++;
    }
    if (1 < same)
        printf("?");
    else
        printf("%c", result + 65);
}