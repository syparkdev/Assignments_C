/*1613665 영어영문학부 박세연
21-05-24
문자열의 배열을 인수로 받아서 저장된 문자열을 출력하는 프로그램입니다.*/

#include <stdio.h>

void pr_str_array(char** dp)          //문자열의 배열을 인수로 받아서 저장된 문자열을 모두 출력하는 함수
{
	int i;
	for (i = 0; i < 5; i++)
		printf("%s\n", *dp++);        
	//배열의 이름인 str은 이중 포인터, 한번 간접 참조하면 배열의 첫번째 문자열을 가리킨다.
	//이후 2번째, 3번째 이어서 5개의 문자열을 전부 출력하도록 ++연산자 사용
}

int main()
{
	char* str[5] =
	{
		"A bad shearer never had a good sickle.",
		"A bad workman (always) blames his tools.",
		"A bad workman quarrels with his tools.",
		"A bad thing never dies.",
		"A bad workman finds fault with his tools."
	};
	
	pr_str_array(str);

	return 0;
}