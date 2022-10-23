/*영어영문학부 1613665 박세연
21-04-12
재귀함수를 이용하여 지수값을 계산하는 프로그램입니다.*/

#include <stdio.h>

int power(int base, int power_raised)                  //밑수와 지수를 인수로 받아 지수값을 계산하는 함수
{
	if (power_raised == 1)                             //지수가 1일 경우 밑수를 반환하라는 재귀함수의 종료조건
		return base;
	else                                               
		return base * power(base, power_raised - 1);
	//지수가 1이 아닌 경우 지수를 하나씩 줄여가며 종료조건에 도달할 때까지 재귀함수를 실행
}

int main()
{
	int base, pow, answer;                             //밑수, 지수, 결과값을 보관할 변수

	printf("밑수: ");                                  //밑수를 입력하라는 메시지
	scanf("%d", &base);                                //밑수를 입력받는 기능 
	printf("지수: ");                                  //지수를 입력하라는 메시지
	scanf("%d", &pow);                                 //지수를 입력받는 기능

	answer = power(base, pow);                         //지수값을 계산하는 함수를 호출하여 결과값을 answer에 할당

	printf("%d^%d = %d\n", base, pow, answer);         //결과값을 출력하는 메시지

	return 0;
}