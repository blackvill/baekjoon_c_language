#include <stdio.h> 

#define MAX 50

int main()
{
    int i, j, count, num;
    char arr[MAX];

    scanf("%d", &num);
    for (j = 0; j < num; j++) 
    {
        count = 0;
        scanf("%s", arr);
        for (i = 0; i < MAX; i++)
        {
            if (arr[i] == '\0')
                break;
            if (arr[i] == '(')
                count++;
            else if (arr[i] == ')' && count > 0)
                count--;
            else if (arr[i] == ')' && count <= 0)
            {
                count--;
                break;
            }
        }
        if (count == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}