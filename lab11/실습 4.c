/*1613665 영어영문학부 박세연
21-05-24
2차원 배열을 복사하는 프로그램입니다.*/

#include <stdio.h>
#define HEIGHT 3
#define WIDTH 3

void array_copy(int src[][WIDTH], int dst[][WIDTH])    //소스 배열을 목적 배열에 복사하는 함수
{
	int i, j;

	for (i = 0; i < HEIGHT; i++)
	{
		for (j = 0; j < WIDTH; j++)
		{
			int* p = &src[i][j];                      //정수 포인터 p에 소스 배열을 하나씩 대입
			int* q = &dst[i][j];                      //정수 포인터 q에 목적 배열을 하나씩 대입
			*q = *p;                                  //p를 간접 참조한 값을 q의 간접 참조에 대입
		}
	}
}

int main()
{
	int og[HEIGHT][WIDTH] =                          //소스 배열 선언
	{
		{100, 30, 67},
		{89, 50, 12},
		{19, 60, 90}
	};

	int copy[HEIGHT][WIDTH] = { 0 };                 //목적 배열 선언

	array_copy(og, copy);                            //배열 복사 함수 호출

	printf("<원본 2차원 배열>\n");                   //원본과 결과 출력
	for (int i = 0; i < HEIGHT; i++)
	{
		for (int j = 0; j < WIDTH; j++)
			printf("%d\t", og[i][j]);
		printf("\n");
	}

	printf("<복사본 2차원 배열>\n");
	for (int i = 0; i < HEIGHT; i++)
	{
		for (int j = 0; j < WIDTH; j++)
			printf("%d\t",copy[i][j]);
		printf("\n");
	}

	return 0;
}