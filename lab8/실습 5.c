/*1613665 영어영문학부 박세연
21-04-27
두 정수의 최대 공약수와 최소 공배수를 반환하는 프로그램입니다.*/

#include <stdio.h>

void get_lcm_gcd(int x, int y, int* p_lcm, int* p_gcd)
{
	int a = x, b = y;                      //x와 y는 모드 연산으로 0이 되어갈 예정이므로 a와 b에 복사해둔다
	int temp = 0;                          //최대공약수 계산에 사용할 임시 변수
	if (y < x)
	{
		while (y != 0)                     //x가 y보다 클 경우의 최대공약수 계산
		{
			int temp = x % y;
			x = y;
			y = temp;
		}
		*p_gcd = x;
	}
	else
	{
		while (x != 0)                    //y가 x보다 클 경우의 최대공약수 계산
		{
			int temp = y % x;
			y = x;
			x = temp;
		}
		*p_gcd = y;
	}

	*p_lcm = (a * b) / *p_gcd;            //최소공배수 계산
}

int main()
{
	int num1 = 0, num2 = 0;               //두 개의 정수를 보관할 변수
	int lcm = 0, gcd = 0;                 //최소공배수와 최대공약수를 보관할 변수
	int* p_lcm = &lcm, * p_gcd = &gcd;    //최소공배수와 최대공약수의 포인터 변수

	printf("두개의 정수를 입력하시오:");  //정수를 입력하라는 메시지
	scanf("%d %d", &num1, &num2);         //정수를 입력받는 기능

	get_lcm_gcd(num1, num2, p_lcm, p_gcd); //함수 호출

	printf("최소공배수는 %d입니다.\n", lcm); //최소공배수를 출력하는 메시지
	printf("최대공약수는 %d입니다.", gcd);   //최대공약수를 출력하는 메시지

	return 0;
}