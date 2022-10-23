/*1613665 ������к� �ڼ���
21-05-24
2���� �迭�� �����ϴ� ���α׷��Դϴ�.*/

#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b)                        //qsort�� ����ϱ� ���� compare�Լ�
{
	return (*(int*)a - *(int*)b);
}

void arrayMerge(int* a, int an, int* b, int bn, int* c, int cn)  //�迭 ���� �Լ�
{
	int i;

	for (i = 0; i < an; i++)                                     //a�迭�� c�迭�� ����
		c[i] = a[i];
	for (i = 0; i < bn; i++)                                     //b�迭�� c�迭�� ����   
		c[an + i] = b[i];

	qsort(c, cn, sizeof(int), compare);                          //c�迭 ����
}

void printArray(int* arr, int n)                                 //�迭 ��� �Լ�
{
	int i;

	printf("{");
	for (i = 0; i < n; i++)
	{
		printf("%d", *arr++);
		if (i != n - 1)
			printf(",");
	}
	printf("}\n");
}

int main()
{
	int a[6] = { 1,2,5,7,9,14 };
	int b[5] = { 2,3,6,8,13 };
	int c[11] = { 0 };

	int d[] = { 9,7,5,3,1 };

	arrayMerge(a, 6, b, 5, c, 11);

	printf("ù��°�迭  ");
	printArray(a, 6);
	printf("�ι�°�迭  ");
	printArray(b, 5);
	printf("����迭  ");
	printArray(c, 11);

	return 0;
}