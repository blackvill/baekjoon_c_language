#include <stdio.h>

int main()
{
    int a[10];
    int b = 42;
    int c[42] = {0};
    int d = 0;
    int sum = 0;
    
    for (int i = 0; i < 10; i++){
        scanf("%d", &a[i]);
    }

    
    for (int i = 0; i < 10; i++){
        d = a[i] % b;
        c[d]++;
    }

    for (int i = 0; i < sizeof(c)/sizeof(int); i++){
        if (c[i] >= 1){
            sum++;
        }
    }
    
    printf("%d", sum);
    return 0;
}