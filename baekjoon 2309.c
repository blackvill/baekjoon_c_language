#include <stdio.h>
 
int height[7];
int input[9];
int flag;
 
void combination(int sum, int cnt, int idx)
{        
    if(cnt == 7)
    {        
        if(sum == 100)
        {
            flag = 1;
            return;
        }
        else
        {
            return;
        }
    }
    for(int i = idx; i < 9; i++)
    {
        height[cnt] = input[i];
        combination(sum + height[cnt], cnt+1, i+1);
        if(flag == 1)
        {
            return;
        }
    }
}
 
int main(void)
{
    for(int i = 0; i < 9; i++)
    {
        scanf("%d", &input[i]);
    }
    combination(0, 0, 0);
    for(int i = 6; i > 0; i--)
    {
        for(int j = 0; j < i; j++)
        {
            if(height[j] > height[j+1])
            {
                int temp = height[j];
                height[j] = height[j+1];
                height[j+1] = temp;
            }
        }
    }
    for(int i = 0; i < 7; i++)
    {
        printf("%d\n", height[i]);
    }
}

// reference - https://coding-insider.tistory.com/entry/%EB%B0%B1%EC%A4%80-2309-%EC%9D%BC%EA%B3%B1-%EB%82%9C%EC%9F%81%EC%9D%B4-C