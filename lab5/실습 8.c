/*영어영문학부 1613665 박세연
* 21-04-05
* 횟수를 입력받고 오일러의 수를 계산하는 프로그램입니다.*/

#include <stdio.h>

long long factorial(int n)                 //팩토리얼을 계산하는 함수
{
	long long result;                      //결과를 보관할 변수

	if (n == 1)                            //재귀함수의 종료 조건
		return 1;

	result = factorial(n - 1);             //재귀함수 호출
	return result * n;                     //재귀함수의 결과 반환

}

int main()
{
	int i, num = 0;                        //반복 제어 변수와 반복 횟수
	double part_e = 0, whole_e = 1;        //오일러의 수와 오일러의 수 계산식의 각 항을 보관할 변수

	printf("어디까지 계산할까요: ");       //반복 횟수를 입력하라는 메시지
	scanf("%d", &num);                     //반복 횟수를 입력받는 기능

	for (i = 1; i <= num; i++)             //1에서 반복 횟수까지 반복
	{
		part_e = 1.0 / factorial(i);       //오일러의 수 계산식의 각 항을 팩토리얼 함수로 계산
		whole_e += part_e;                 //오일러의 수 계산식의 각 항을 모두 합산
	}

	printf("오일러의 수는 %lf 입니다.", whole_e);  //결과값을 출력하는 메시지

	return 0;
}


