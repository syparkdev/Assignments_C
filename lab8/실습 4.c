/*1613665 ������к� �ڼ���
21-04-27
�迭 ��ҵ��� ���� ����ϴ� ���α׷��Դϴ�.*/

#include <stdio.h>
#define SIZE 10

int array_sum(int* A, int size)
{
	int i, sum = 0;                         //�ݺ� ���� ������ ���� ������ ����
	for (i = 0; i < size; i++)              //�迭�� ��Ҹ� ���ϴ� �ݺ���
	{
		sum += A[i];
	}
	return sum;
}

int main()
{
	int A[SIZE] = { 1,2,3 };                  //�迭 ����
	int i;                                    //�ݺ� ���� ����

	printf("A[] = {");                        //����� �迭 ��ҵ��� Ʋ

	for (i = 0; i < SIZE; i++)                //�迭�� ��Ҹ� ����ϴ� �ݺ���
		printf("%d ", A[i]);

	printf("}\n������ ��=%d", array_sum(A, SIZE));  //�Լ��� ������ ��� ���

	return 0;
}