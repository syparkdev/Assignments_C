/*1613665 영어영문학부 박세연
21-04-27
2개의 정수를 받는 함수를 사용해 합을 계산하는 프로그램입니다.*/

#include <stdio.h>

void get_int(int* px, int* py)
{
	printf("2개의 정수를 입력하시오(예: 10 20):");    //정수를 입력하라는 메시지
	scanf("%d %d", px, py);                           //포인터 변수가 가리키는 위치에 정수를 입력받는 기능
}

int main()
{
	int x = 0, y = 0;                                 //입력받을 정수를 보관할 변수
	int* px = &x, * py = &y;                          //함수에 넘겨줄 포인터 변수

	get_int(px, py);
	printf("정수의 합은 %d", x + y);

	return 0;
}