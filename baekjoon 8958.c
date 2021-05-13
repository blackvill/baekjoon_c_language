#include <stdio.h>
#include <string.h>

int main(void) {
    
    int a, score, sum;
    char b[80];

    scanf("%d", &a);

    for(int i=0; i<a; i++) {
        sum = 0;
        score = 1;
        scanf("%s", b);
        for(int j=0; j<strlen(b); j++) {
            if(b[j] == 'O') {
                sum += score;
                score++;
            }
            if(b[j] == 'X')  score = 1;
        } 
        printf("%d\n", sum);
    }
}