/*1613665 박세연 영어영문학부
21-04-27
2차원 행렬에 특정 함수를 사용하는 프로그램입니다.*/

#include <stdio.h>

void scalar_mult(int a[3][3], int scalar)
{
	int i, j;                                    //반복 제어 변수
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			a[i][j] = scalar * a[i][j];          //배열의 각 자리에 스칼라 값을 곱하는 식
		}
	}
}

void transpose(int a[3][3], int b[3][3])
{
	int i, j;                                    //반복 제어 변수
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			b[j][i] =  a[i][j];                  //배열 a를 transpose한 값을 배열 b에 할당
		}
	}
}

int main()
{
	int a[3][3] = { {1,2,3}, {4,5,6},{7,8,9} };  //배열 a 선언
	int b[3][3] = { {0} };                       //배열 b 선언
	int i, j;                                    //반복 제어 변수

	transpose(a, b);                             //transpose 함수 사용
	printf("transpose :\n");                     //transpose의 결과를 출력한다는 메시지

	for (i = 0; i < 3; i++)                      //transpose의 결과 출력
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", b[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");

	scalar_mult(a, 2);                             //scalar_mult 함수 사용
	printf("scalar_mult :\n");                     //scalar_mult의 결과를 출력한다는 메시지

	for (i = 0; i < 3; i++)                        //scalar_mult의 결과 출력
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}

