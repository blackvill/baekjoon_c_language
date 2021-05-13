#include <stdio.h>
#include <stdbool.h>

int main(void){
    int i=1;
    int j=1;
    int input = 0;
    
    scanf("%d", &input);
    
    if (input != 1) {
        j++;
        bool root = true;
        bool edge = false;
 
        for (int v=2; v<input; v++) {
            if (edge) {
                if (i == 1)
                    j++;
                else
                    i++;
                edge = false;
            } else {
                if (root == true) {
                    i++;
                    j--;
 
                    if (j == 1) {
                        root = false;
                        edge = true;
                    }
                } else {
                    i--;
                    j++;
 
                    if (i == 1) {
                        root = true;
                        edge = true;
                    }
                }
            }
        }
    }
    printf("%d/%d", i, j);
}