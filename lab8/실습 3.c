/*1613665 ������к� �ڼ���
21-04-27
�迭�� �����ϴ� ���α׷��Դϴ�.*/

#include <stdio.h>
#define SIZE 10

void array_copy(int* A, int* B, int size)
{
	int i;
	for (i = 0; i < size; i++)                  //�迭 A�� ��ҵ��� �迭 B�� �����ϴ� �ݺ���
		B[i] = A[i];
}

int main()
{
	int A[SIZE] = { 1,2,3 };                  //�迭 A ����
	int B[SIZE] = { 0 };                      //�迭 B ����
	int i;                                    //�ݺ� ���� ���� ����

	array_copy(A, B, SIZE);                   //�Լ� ȣ��

	printf("A[] = {");                        //����� �迭 ��ҵ��� Ʋ

	for (i = 0; i < SIZE; i++)                //�迭�� ��Ҹ� ����ϴ� �ݺ���
		printf("%d ", A[i]);

	printf("}\n");

	printf("B[] = {");                        //����� �迭 ��ҵ��� Ʋ

	for (i = 0; i < SIZE; i++)                //�迭�� ��Ҹ� ����ϴ� �ݺ���
		printf("%d ", B[i]);

	printf("}");

	return 0;
}