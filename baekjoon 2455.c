#include <stdio.h>

int main()
{
    int a[2][4];
    int b[4];
    int sum = 0;
    int max = 0;
    
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 2; j++){
            scanf("%d", &a[j][i]);
        }
    }
    for (int i = 0; i < 4; i++){
        b[i] = a[1][i] - a[0][i];
    }
    
    max = b[0];
    sum = b[0];
    
    for (int i = 0; i < 3; i++){
        sum = sum + b[i+1];
        if (max < sum){
            max = sum;
        }
    }
    
    printf("%d", max);

    return 0;
}