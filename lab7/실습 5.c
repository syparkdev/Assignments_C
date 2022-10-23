/*1613665 박세연 영어영문학부
21-04-26
벡터의 내적을 구하는 프로그램입니다.*/

#include <stdio.h>
#define SIZE 3

double vector_dot_prod(double x[], double y[])
{
	double sum = 0;                            //계산한 내적을 보관할 변수
	int i;                                     //반복 제어 변수

	for (i = 0; i < SIZE; i++)                 //벡터를 표현한 배열의 i번째 원소를 곱한 값을 더하는 계산
		sum += x[i] * y[i];

	return sum;
}

int main()
{
	double x[3] = { 1.0, 2.0 ,3.0 };                   //벡터를 표현한 배열 선언
	double y[3] = { 1.0, 2.0, 3.0 };
	double answer = 0;                         //함수의 반환값을 받을 변수

	answer = vector_dot_prod(x, y);            //벡터의 내적 계산

	printf("벡터의 내적 = [%lf]", answer);     //결과 출력

	return 0;
}