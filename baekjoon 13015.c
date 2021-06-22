#include <stdio.h>
int main(void){
    
    int n = 0;
    scanf("%d",&n);
    int height = n * 2 - 1; //모양의 층수 
    int blankCnt = (n - 1) * 2 - 1; //첫번째 줄에서 가운데에 있는 공백의 개수
    int i = 0, j = i + (n - 1);
    int k = j + blankCnt + 1, l = k + (n - 1);
    int isChanged = 0;

    for (int a = 1; a <= height; a++)
    {
        if (a <= n)
        {
            for (int b = 0; b < i; b++)
                printf(" ");
            for (int b = i; b <= j; b++)
            {
                if(a == 1)
                    printf("*");
                else
                {
                    if(b == i || b == j)
                        printf("*");
                    else
                        printf(" ");
                }
            }
            for (int b = j + 1; b < k; b++)
                printf(" ");
            for (int b = k; b <= l; b++)
            {
                if (a == 1)
                    printf("*");
                else
                {
                    if (b == k || b == l)
                    {
                        if (a == n && b == k)
                        {
                            
                        }else
                            printf("*");    
                    }
                    else
                        printf(" ");
                }
            }
            i++;
            j++;
            k--;
            l--;
        }
        else
        {
            if (!isChanged)
            {
                i -= 2;
                j -= 2;
                k += 2;
                l += 2;
                isChanged = 1;
            }    
            for (int b = 0; b < i; b++)
                printf(" ");
            for (int b = i; b <= j; b++)
            {
                if (a == height)
                    printf("*");
                else
                {
                    if (b == i || b == j)
                        printf("*");
                    else
                        printf(" ");
                }
            }
            for (int b = j + 1; b < k; b++)
                printf(" ");
            for (int b = k; b <= l; b++)
            {
                if (a == height)
                    printf("*");
                else
                {
                    if(b == k || b == l)
                        printf("*");
                    else
                        printf(" ");
                }
            }
            i--;
            j--;
            k++;
            l++;
        }
        printf("\n");
    }
}

// reference - https://m.blog.naver.com/PostView.naver?isHttpsRedirect=true&blogId=sexyback8034&logNo=221603883528