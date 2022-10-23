/*1613665 박세연 영어영문학부
* 21-05-12
* 복소수를 더하는 함수를 사용하는 프로그램입니다.*/

#include <stdio.h>

typedef struct                                    //복소수를 표현할 구조체 선언
{
	double real;
	double imag;
} complex;


complex complex_add (complex c1, complex c2)      //복소수를 더하는 함수
{
	complex result;
	result.real = c1.real + c2.real;
	result.imag = c1.imag + c2.imag;

	return result;
}

int main()
{
	complex c1, c2, answer;

	c1.real = 1.0;
	c1.imag = 2.0;

	c2.real = 2.0;
	c2.imag = 3.0;

	answer = complex_add(c1, c2);                //복소수 c1과 c2를 더할 함수 호출

	printf("%lf + %lfi\n", c1.real, c1.imag);
	printf("%lf + %lfi\n", c2.real, c2.imag);
	printf("%lf + %lfi\n", answer.real, answer.imag);

	return 0;
}