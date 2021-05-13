#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    
    scanf("%d %d", &a, &b);
    
    int c[a];
    
    for (int i = 0; i < a; i++){
        scanf("%d", &c[i]);
    }
    
    for (int i = 0; i < a; i++){
        if (c[i] < b){
            printf("%d ", c[i]);
        }
    }
    return 0;
}