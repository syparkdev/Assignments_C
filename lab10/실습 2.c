/*1613665 �ڼ��� ������к�
* 21-05-12
* ���Ҽ��� ���ϴ� �Լ��� ����ϴ� ���α׷��Դϴ�.*/

#include <stdio.h>

typedef struct                                    //���Ҽ��� ǥ���� ����ü ����
{
	double real;
	double imag;
} complex;


complex complex_add (complex c1, complex c2)      //���Ҽ��� ���ϴ� �Լ�
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

	answer = complex_add(c1, c2);                //���Ҽ� c1�� c2�� ���� �Լ� ȣ��

	printf("%lf + %lfi\n", c1.real, c1.imag);
	printf("%lf + %lfi\n", c2.real, c2.imag);
	printf("%lf + %lfi\n", answer.real, answer.imag);

	return 0;
}