#include <stdio.h>
#include <stdlib.h>

int compare(const void *a , const void *b); 

int main(void) 
{
    int n;
    int arr[1001] = {0, }; 

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    qsort(arr, n, sizeof(arr[0]), compare); 
    for(int i = 0 ; i < n ; i++) 
        printf("%d " , arr[i]); 
} 

int compare(const void *a , const void *b) 
{ 
     if( *(int*)a > *(int*)b )
        return 1;
    else if( *(int*)a < *(int*)b )
        return -1;
    else
        return 0;
}

// subtask grade - 10