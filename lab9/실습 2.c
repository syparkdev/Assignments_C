/*1613665 박세연 영어영문학부
21-05-06
입력받은 문자열에서 각 문자가 나타나는 빈도를 계산하는 프로그램입니다.*/

#include <stdio.h>

int str_chr(char arr[], char ch)      //문자열에서 문자가 나타나는 횟수를 반환하는 함수
{
	int cnt = 0, i = 0;

	while (arr[i] != NULL)            //문자열이 끝날 때까지 반복하는 반복문
	{
		if (arr[i] == ch)             //문자열에서 해당하는 문자를 발견하면 횟수를 증가시키는 조건문
			cnt++;
		i++;
	}

	return cnt;
}

int main()
{
	char str[100];
	int i;

	printf("문자열을 입력하시오:");    //문자열을 입력하라는 메시지
	gets_s(str, 100);                  //문자열을 입력받는 기능

	for (i = 0; i < 26; i++)           //각 문자별 등장 횟수를 출력하는 반복문
		printf("%c:\t%d\n", i + 'a', str_chr(str, i + 'a'));
	
	return 0;
}