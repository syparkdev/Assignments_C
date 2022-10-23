/*1613665 �ڼ��� ������к�
21-04-26
������ ������ ���ϴ� ���α׷��Դϴ�.*/

#include <stdio.h>
#define SIZE 3

double vector_dot_prod(double x[], double y[])
{
	double sum = 0;                            //����� ������ ������ ����
	int i;                                     //�ݺ� ���� ����

	for (i = 0; i < SIZE; i++)                 //���͸� ǥ���� �迭�� i��° ���Ҹ� ���� ���� ���ϴ� ���
		sum += x[i] * y[i];

	return sum;
}

int main()
{
	double x[3] = { 1.0, 2.0 ,3.0 };                   //���͸� ǥ���� �迭 ����
	double y[3] = { 1.0, 2.0, 3.0 };
	double answer = 0;                         //�Լ��� ��ȯ���� ���� ����

	answer = vector_dot_prod(x, y);            //������ ���� ���

	printf("������ ���� = [%lf]", answer);     //��� ���

	return 0;
}