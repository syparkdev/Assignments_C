/*1613665 ������к� �ڼ���
21-04-27
���� �迭�� ��ҵ��� ȭ�鿡 ����ϴ� ���α׷��Դϴ�.*/

#include <stdio.h>
#define SIZE 10

void array_print(int* A, int size)
{
	int i;                                    //�ݺ� ���� ����
	printf("A[] = {");                        //����� �迭 ��ҵ��� Ʋ
	
	for (i = 0; i < size; i++)                //�迭�� ��Ҹ� ����ϴ� �ݺ���
		printf("%d ", A[i]);
	
	printf("}");
}

int main()
{
	int A[SIZE] = { 1,2,3,4,5 };              //�迭 ����

	array_print(A, SIZE);                     //�Լ� ȣ��

	return 0;
}