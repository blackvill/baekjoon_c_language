#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    long long num[10000]; // 감소하는 수를 저장하는 배열
    int first, last; // 한자리 아래의 감소하는 수의 범위를 나타낸다.
    int cur; // 다음 나오는 감소하는 수를 넣을 위치
    
    for(int i = 0; i < 10; i++) // 0~9번째까지는 그대로 0~9를 넣는다.
        num[i] = i;
    
    first = 0; // 한자리 숫자들은 0부터
    last = 9; // 9까지 들어가 있다.
    cur = 10; // 0~9까지 넣었으므로 다음 위치는 10
    
    for(int i = 1; i < 10; i++){ // 10의 몇승인지를 나타낸다. ex) i가 2이면, 10의 2승인 백 대 수들 = 세자리 수들
        for(int j = i; j < 10; j++){ // j는 현재 수의 맨 앞자리 숫자를 의미한다. ex) j가 3이면, 3xx
            for(int k = first; k <= last; k++){ // 한자리 아래의 감소하는 수들을 확인해서 ex) 두자리 수 중 감소하는 수 = 10, 20, 21, 30, 31 등
                if(num[k] / pow(10.0, i-1) < j){ // 해당 수의 맨 앞자리 숫자가 j보다 작다면 ex) 위의 숫자 중 10, 20, 21만 해당한다.
                    num[cur++] = j * pow(10.0, i) + num[k]; // 해당 감소하는 수의 맨 앞에 j를 추가했을 때 감소하는 수가 된다. 그러므로 감소하는 수 배열에 추가 ex) 310, 320, 321 추가
                    if(cur > n){ // n번째 감소하는 수를 찾았다면
                        printf("%lld\n", num[n]); // n번째 감소하는 수 출력
                        return 0;
                    }
                }
            }
        }
        first = last + 1; // 한자리 위의 감소하는 수 중에 첫번째를 가르킴
        last = cur - 1; // 한자리 위의 감소하는 수 중에 마지막을 가르킴
    }
    
    printf("-1\n"); // n번째 감소하는 수가 없으므로 -1 출력
    return 0;
}

//reference - https://terry1213.github.io/backjoon/1038/