/*영어영문학부 1613665 박세연
21-04-12
재귀함수를 사용하여 특정 수식의 값을 계산하는 프로그램입니다.*/

#include <stdio.h>

double recursive(int n)                       //수식의 값을 계산하는 재귀 함수
{
	if (n == 1)                               //분모가 1일 경우 재귀 함수를 종료하는 조건
		return 1;
	else
		return 1.0 / n + recursive(n - 1);    //분모가 1이 아닐 경우 재귀 함수를 호출
}

int main()
{
	printf("%lf", recursive(10));             //수식의 결과값을 출력하는 메시지

	return 0;
}