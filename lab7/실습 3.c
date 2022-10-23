/*1613665 박세연 영어영문학부
21-04-26
2차원 배열의 행과 열의 합계를 계산하는 프로그램입니다.*/

#include <stdio.h>
#define ROW 3                                     //행의 최댓값
#define COL 5                                     //열의 최댓값

int main()
{
	int table[ROW][COL] =                         //배열 선언
	{	
		{12,56,32,16,98},
		{99,56,34,41,3},
		{65,3,87,78,21} 
	};

	int sum = 0;                                  //행과 열의 합을 보관할 변수
	int i, j;                                     //반복 제어 변수

	for (i = 0; i < ROW; i++)                     //행을 고정하고 열의 값을 더해서 행의 합을 얻는 반복문
	{
		sum = 0;                                  //행이 바뀔 때마다 sum을 초기화
		for (j = 0; j < COL; j++)
			sum += table[i][j];

		printf("%d행의 합계: %d\n", i, sum);      //각 행마다 결과 출력
	}

	for (i = 0; i <COL; i++)                      //열을 고정하고 행의 값을 더해서 열의 합을 얻는 반복문
	{
		sum = 0;                                  //행이 바뀔 때마다 sum을 초기화
		for (j = 0; j < ROW; j++)
			sum += table[j][i];

		printf("%d열의 합계: %d\n", i, sum);      //각 열마다 결과 출력
	}

	return 0;
}