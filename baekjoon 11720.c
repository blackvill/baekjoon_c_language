#include <stdio.h>

int main()
{
    int a = 0;
    int sum = 0;
    
    scanf("%d", &a);
    
    int b[a];
    
    for(int i = 0; i < a; i++){
        scanf("%1d", &b[i]);
    }
    
    for(int i = 0; i < a; i++){
        sum += b[i];
    }
    
    printf("%d", sum);

    return 0;
}