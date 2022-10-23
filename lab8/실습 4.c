/*1613665 영어영문학부 박세연
21-04-27
배열 요소들의 합을 계산하는 프로그램입니다.*/

#include <stdio.h>
#define SIZE 10

int array_sum(int* A, int size)
{
	int i, sum = 0;                         //반복 제어 변수와 합을 보관할 변수
	for (i = 0; i < size; i++)              //배열의 요소를 더하는 반복문
	{
		sum += A[i];
	}
	return sum;
}

int main()
{
	int A[SIZE] = { 1,2,3 };                  //배열 선언
	int i;                                    //반복 제어 변수

	printf("A[] = {");                        //출력할 배열 요소들의 틀

	for (i = 0; i < SIZE; i++)                //배열의 요소를 출력하는 반복문
		printf("%d ", A[i]);

	printf("}\n월급의 합=%d", array_sum(A, SIZE));  //함수를 수행한 결과 출력

	return 0;
}