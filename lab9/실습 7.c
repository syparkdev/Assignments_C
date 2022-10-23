/*1613665 박세연 영어영문학부
21-05-11
찾아 바꾸기 기능을 구현하는 프로그램입니다.*/

#include <stdio.h>
#include <string.h>

int main()
{
	char str[80] = { NULL };                      //입력받을 문자열을 보관할 배열
	char to[80] = { NULL };                       //찾을 문자열을 보관할 배열
	char from[80] = { NULL };                     //바꿀 문자열을 보관할 배열
	char revised[80] = { NULL }, * token;         //수정된 문자열을 보관할 배열과 자른 단어를 보관할 포인터 변수

	printf("문자열을 입력하시오:");
	gets_s(str, 80);

	printf("찾을 문자열:");
	gets_s(from, 80);

	printf("바꿀 문자열:");
	gets_s(to, 80);

	token = strtok(str, " ");                    //첫 단어를 token에 대입

	while (token != NULL)                        //str이 끝날 때까지 반복하는 반복문
	{
		if (strcmp(token, from) != 0)            
			//token에 대입한 단어가 찾는 단어와 다를 경우 토큰을 수정된 문자열에 덧붙이는 조건문
		{
			strcat(revised, token);
			strcat(revised, " ");
		}
		else                            
			//token이 찾는 단어와 일치할 경우 바꿀 문자열을 수정된 문자열에 덧붙이는 조건문
		{
			strcat(revised, to);
			strcat(revised, " ");
		}

		token = strtok(NULL, " ");               //token에 다음 단어를 대입하는 실행문
	}

	printf("수정된 문자열:%s", revised);         //수정된 문자열을 출력하는 메시지

	return 0;
}