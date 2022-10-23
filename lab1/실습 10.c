#include <stdio.h>

int main()
{
	int code; // 숫자를 입력받을 자리
	printf("아스키 코드값을 입력하시오:"); //숫자를 입력하라는 메시지
	scanf("%i", &code); //숫자를 입력받기
	printf("문자:%c 입니다.", (char)code); //입력받은 숫자를 아스키 코드로 문자로 보여주기

	return 0;
}