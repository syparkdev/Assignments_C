/*1613665 �ڼ��� ������к�
21-06-01
���̰� 100�� n���� ���ڿ��� �����ϴµ� �ʿ��� ���� �޸𸮸� �Ҵ��ϴ� ���α׷��Դϴ�.*/

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main()
{
	char** A = NULL;
	int i, n = 0;

	printf("���ڿ��� ����: ");
	scanf("%d", &n);
	getchar();

	if ((A = (char**)malloc(sizeof(char*) * n)) != NULL)        //������ �迭�� �ʿ��� ũ�⸸ŭ�� ���� �޸� �Ҵ�
	{
		for (i = 0; i < n; i++)
			A[i] = (char*)malloc(sizeof(char) * 100);
	}

	for (i = 0; i < n; i++)                                     //���ڿ��� �Է¹޴� �ݺ���
	{
		printf("���ڿ��� �Է��Ͻÿ�: ");
		gets_s(A[i], 100);
	}

	printf("[");

	for (i = 0; i < n; i++)                                     //���ڿ��� ����ϴ� �ݺ���
	{
		printf("\"%s\"", A[i]);
		if (i != (n - 1))
			printf(" ");
	}

	printf("]");

	free(A);

	return 0;
}