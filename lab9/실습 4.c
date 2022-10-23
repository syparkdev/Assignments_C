/*1613665 박세연 영어영문학부
21-05-11
문자열을 입력받아 단어의 개수를 세는 프로그램입니다.*/

#include <stdio.h>

int main()
{
	char s[100] = { NULL };                    //입력받은 문자열을 보관할 배열
	char* token;                               //공백을 기준으로 자른 단어를 보관할 포인터 변수
	int cnt = 1;                               //단어의 수를 셀 변수

	printf("문자열을 입력하시오:");            //문자열을 입력하라는 메시지
	gets_s(s, 100);                            //문자열을 입력받는 기능

	token = strtok(s, " ");                    //첫번째로 자른 단어를 토큰에 대입

	while (token != NULL)                      //단어를 세는 반복문
	{
		token = strtok(NULL, " ");
		cnt++;
	}

	printf("단어의 수는 %d입니다.", cnt);      //단어의 수를 출력하는 메시지

	return 0;
}
