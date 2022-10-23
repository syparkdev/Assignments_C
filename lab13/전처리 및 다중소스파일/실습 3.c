/*1613665 박세연 영어영문학부
21-05-31
비트를 조작하는 매크로를 작성하고 확인하는 프로그램입니다.*/

#include <stdio.h>
#define SET_BIT(n, pos) ((n) |= (1 << (pos)))
#define CLR_BIT(n, pos) ((n &= (~(1) << (pos))))
#define GET_BIT(n, pos) (((n) >> (pos)) & 1)

int main()
{
	int n = 8421505;                                //예시의 16진수를 10진수로 변환한 값

	printf("n=%#x\n", n);                           //초기화한 변수를 출력하는 메시지
	printf("GET_BIT(): %d\n", GET_BIT(n, 0));       //변수 n의 첫번째 비트를 출력하는 메시지
	printf("SET_BIT(2)\n");                         //변수 n의 3번째 비트를 1로 바꾼다는 메시지
	printf("n=%#x\n", SET_BIT(n, 2));               //3번째 비트를 1로 바꾼 이후의 변수 n을 출력

	return 0;
}