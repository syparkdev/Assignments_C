/*1613665 영어영문학부 박세연
21-05-24
행렬의 곱을 수행하는 프로그램입니다.*/

#include <stdio.h>
#include <string.h>

void display(double *arr, int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
			printf("%3.1lf\t", *arr++);
		printf("\n");
	}
	printf("\n");
}

void multiply(double **a, double **b, double **c)
{
	int i, j, k;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			for (k = 0; j < 3; k++)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}

}

int main()
{
	double a[3][3] =
	{
		{4.2, 4.3, 3.8},
		{3.7, 1.5, 0.7},
		{1.5, 3.6, 0.0}
	};

	double b[3][2] =
	{
		{5.2, 2.1},
		{3.2, 1.4},
		{0.0, 0.0}
	};

	double c[3][2] = { 0 };

	multiply(a, b, c);

	display(*a, 3, 3);
	printf("*\n\n");
	display(*b, 3, 2);
	printf("=\n\n");
	display(*c, 3, 2);

	return 0;
}