#include <stdio.h>

int main()
{
	int data = 0; // 입력받을 숫자의 자리

	printf("16진수 정수를 입력하시오:"); //data를 입력하라는 메시지
	scanf("%x", &data); //data를 받는다
	printf("8진수로는 %#o 입니다.\n", data);
	printf("10진수로는 %d 입니다.\n", data);
	printf("16진수로는 %#x 입니다.\n", data);

	return 0;
}