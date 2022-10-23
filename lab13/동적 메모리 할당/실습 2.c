/*1613665 박세연 영어영문학부
21-06-01
사용자로부터 단어를 입력받는 공간을 동적 메모리로 할당받는 프로그램입니다.*/

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

char* get_word()
{
	char* s = (char*)malloc(50);                //동적 메모리 할당

	if (s == NULL)
	{
		printf("메모리 할당 오류\n");
		exit(1);
	}

	printf("단어를 입력하시오(최대 50글자): "); //단어를 입력하라는 메시지
	scanf("%s", s);                             //단어를 입력받는 기능

	return s;
}

int main()
{
	char* s = NULL;

	s = get_word();
	printf("동적 메모리에 저장된 단어는 %s입니다.", s);  //결과 출력

	return 0;
}