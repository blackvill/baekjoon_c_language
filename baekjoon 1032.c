#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int i, j, num, len;
    char **arr;
    char answer[50];

    scanf("%d",&num);
    arr = (char**)malloc(sizeof(char*)*num);
    for(i=0;i<num;i++)
        arr[i] = (char*)malloc(sizeof(char)*50);
    for(i=0;i<num;i++)
        scanf("%s",arr[i]);
    for(j=0; arr[0][j] != '\0'; j++)
        answer[j] = arr[0][j];
    len = strlen(answer);
    for(j=0;j<len; j++)
    {
        for(i=1; i<num; i++)
        {
            if(arr[i][j] != arr[i-1][j])
            {
                answer[j] = '?';
                break;
            }
            else
                answer[j] = arr[i][j];
        }
    }
    printf("%s", answer);
}