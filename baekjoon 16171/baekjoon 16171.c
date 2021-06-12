#include <stdio.h>
#include <string.h>

int main()
{
	char s[101];
	char k[101];
	char original_s[101];
	int i, cnt=0;

	scanf("%s", s);
	scanf("%s", k);
	for (i = 0; i < strlen(s); i++)
    {
		if (s[i] < 48 || s[i] > 57)
			original_s[cnt++] = s[i];
	}
	original_s[cnt] = NULL;
	if (strstr(original_s, k) != NULL)
        printf("1");
	else
        printf("0");
}

/*
strcmp >> 문자열 비교 함수
두 문자열이 같다면 0리턴, 파라미터 1이 더 크다면 1 리턴, 파라미터 2가 더 크다면 -1 리턴
단, 길이가 던 긴 문자열 내에서 특정 문자를 비교 불가

strstr >> 문자열 내 특정 문자열 검색 함수
특정 문자열이 있다면 찾을 문자열의 시작주소를 리턴
*/