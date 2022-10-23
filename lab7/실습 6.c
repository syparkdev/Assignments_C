/*1613665 �ڼ��� ������к�
21-04-27
2���� ��Ŀ� Ư�� �Լ��� ����ϴ� ���α׷��Դϴ�.*/

#include <stdio.h>

void scalar_mult(int a[3][3], int scalar)
{
	int i, j;                                    //�ݺ� ���� ����
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			a[i][j] = scalar * a[i][j];          //�迭�� �� �ڸ��� ��Į�� ���� ���ϴ� ��
		}
	}
}

void transpose(int a[3][3], int b[3][3])
{
	int i, j;                                    //�ݺ� ���� ����
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			b[j][i] =  a[i][j];                  //�迭 a�� transpose�� ���� �迭 b�� �Ҵ�
		}
	}
}

int main()
{
	int a[3][3] = { {1,2,3}, {4,5,6},{7,8,9} };  //�迭 a ����
	int b[3][3] = { {0} };                       //�迭 b ����
	int i, j;                                    //�ݺ� ���� ����

	transpose(a, b);                             //transpose �Լ� ���
	printf("transpose :\n");                     //transpose�� ����� ����Ѵٴ� �޽���

	for (i = 0; i < 3; i++)                      //transpose�� ��� ���
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", b[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");

	scalar_mult(a, 2);                             //scalar_mult �Լ� ���
	printf("scalar_mult :\n");                     //scalar_mult�� ����� ����Ѵٴ� �޽���

	for (i = 0; i < 3; i++)                        //scalar_mult�� ��� ���
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}

