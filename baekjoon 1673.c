#include <stdio.h>

int main(void) {
    int n, k;
    // 기본 쿠폰, 쿠폰 만드는데 필요한 도장갯수
    int stamp = 0;
    // 도장 갯수
    int chicken = 0;
    // 치킨 몇마리 먹는가?

    while (scanf("%d %d", &n, &k) != EOF) {
        while (1) {
            chicken += n; 
            // 쿠폰 만큼 치킨을 먹을 거니까 추가
            stamp += n;
            // 쿠폰을 써서 도장이 찍힐 거니까 도장 추가
            n =  stamp / k;
            // 도장을 쿠폰으로 바꾸기
            stamp %= k;
            // 남은 도장 갯수 구하기

            if (n == 0)
                break;
            // 가진 도장이 0이 되면 종료
        }
        printf("%d\n", chicken);
        // 총 먹은 치킨 수 출력
        chicken = 0;
        stamp = 0;
        n = 0;
        k = 0;
        // 새로 입력을 받을 거니까 초기화
    }
}