/*1613665 박세연 영어영문학부
21-05-11
문자열을 입력받아 회문인지 판별하는 프로그램입니다.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char str[100] = { 0 };                              //문자열을 입력받을 배열
	int i, cnt = 0;                                     //반복 제어 변수와 일치하는 문자의 수를 셀 변수

	printf("문자열을 입력하시오:");
	gets_s(str, 100);

	for (i = 0; i < strlen(str); i++)                   //문자가 대문자일 경우 소문자로 바꿔주는 조건문
	{
		if (isupper(str[i]))
			str[i] = str[i] + 32;
	}

	for (i = 0; i < strlen(str); i++)                   //첫 문자와 끝 문자를 비교해서 같을 경우 cnt를 증가시키는 반복문
	{
		if (str[i] == str[(strlen(str) - 1) - i])
			cnt++;
	}

	if (cnt == strlen(str))                             
		//cnt가 문자열의 길이와 같을 경우, 즉 문자열의 처음부터 끝까지 각 문자와 카운터파트가 일치할 경우
		//회문이라는 메시지를 출력하는 조건문
		printf("회문입니다.");
	else
		printf("회문이 아닙니다.");

	return 0;
}