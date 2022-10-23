/*1613665 영어영문학부 박세연
21-05-24
1차원 배열에 저장된 정수들의 합을 구하는 함수를 사용하여
2차원 배열에 저장된 정수들의 합을 구하는 프로그램입니다.*/

#include <stdio.h>

int get_sum(int array[], int size)              //1차원 배열에 저장된 정수들의 합을 구하는 함수
{
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += array[i];
	
	return sum;
}

int main()
{
	int m[3][6] =                               //2차원 배열 선언
	{
		{10,10,10,10,10,10},
		{10,10,10,10,10,10},
		{10,10,10,10,10,10}
	};

	int sum = 0;                                //2차원 배열에 저장된 정수들의 합을 대입할 변수

	for (int i = 0; i < 3; i++)                 //2차원 배열의 각 행의 합을 get_sum으로 구하고 다시 그 합을 sum에 대입
	{
		sum += get_sum(m[i], 6);
	}

	printf("정수의 합 = %d", sum);              //결과 출력

	return 0;
}