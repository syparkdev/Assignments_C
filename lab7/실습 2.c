/*1613665 �ڼ��� ������к�
21-04-26
�� �迭�� �ٸ� �迭�� �����ϴ� �Լ��� ����ϴ� ���α׷��Դϴ�.*/

#include <stdio.h>
#define SIZE 10

void array_copy(int a[], int b[], int size)      //�迭�� �����ϴ� �Լ�
{
	int i;
	for (i = 0; i < SIZE; i++)
		b[i] = a[i];
}

int main()
{
	int a[SIZE] = { 1,2,3 };                      //������ �迭�� ����
	int b[SIZE] = { 0 };                          //���縦 ���� �迭�� ����
	int i;                                        //�ݺ� ���� ����

	array_copy(a, b, SIZE);                       //�迭 ���� �Լ� ȣ��

	for (i = 0; i < SIZE; i++)                    //�迭 a�� ������ ���
		printf("%d ", a[i]);

	printf("\n");                                 //�ٹٲ� ����

	for (i = 0; i < SIZE; i++)                    //�迭 b�� ������ ���
		printf("%d ", b[i]);

	return 0;
}