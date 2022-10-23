/*1613665 ������к� �ڼ���
21-05-24
2���� �迭�� �����ϴ� ���α׷��Դϴ�.*/

#include <stdio.h>
#define HEIGHT 3
#define WIDTH 3

void array_copy(int src[][WIDTH], int dst[][WIDTH])    //�ҽ� �迭�� ���� �迭�� �����ϴ� �Լ�
{
	int i, j;

	for (i = 0; i < HEIGHT; i++)
	{
		for (j = 0; j < WIDTH; j++)
		{
			int* p = &src[i][j];                      //���� ������ p�� �ҽ� �迭�� �ϳ��� ����
			int* q = &dst[i][j];                      //���� ������ q�� ���� �迭�� �ϳ��� ����
			*q = *p;                                  //p�� ���� ������ ���� q�� ���� ������ ����
		}
	}
}

int main()
{
	int og[HEIGHT][WIDTH] =                          //�ҽ� �迭 ����
	{
		{100, 30, 67},
		{89, 50, 12},
		{19, 60, 90}
	};

	int copy[HEIGHT][WIDTH] = { 0 };                 //���� �迭 ����

	array_copy(og, copy);                            //�迭 ���� �Լ� ȣ��

	printf("<���� 2���� �迭>\n");                   //������ ��� ���
	for (int i = 0; i < HEIGHT; i++)
	{
		for (int j = 0; j < WIDTH; j++)
			printf("%d\t", og[i][j]);
		printf("\n");
	}

	printf("<���纻 2���� �迭>\n");
	for (int i = 0; i < HEIGHT; i++)
	{
		for (int j = 0; j < WIDTH; j++)
			printf("%d\t",copy[i][j]);
		printf("\n");
	}

	return 0;
}