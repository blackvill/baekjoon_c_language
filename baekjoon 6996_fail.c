#include <stdio.h>

int main(void)
{
    int n;
    char arr1[101];
    char arr2[101];
    char str1[128] = {0, };
    char str2[128] = {0, };
    int cor = 0;
   
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%s %s", &arr1, &arr2);
        
        for (int j = 0; j < 128; j++)
        {
            str1[arr1[j]]++;
            str2[arr2[j]]++;
        }
        for (int k = 0; k < 128; k++)
        {
            if (str1[k] != str2[k])
            {
                printf("%s & %s are NOT anagrams.\n", arr1, arr2);
                break ;
                cor = 1;
            }
        }
        if (cor == 0)
            printf("%s & %s are anagrams.\n", arr1, arr2);
    }
}