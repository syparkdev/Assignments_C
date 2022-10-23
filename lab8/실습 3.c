/*1613665 영어영문학부 박세연
21-04-27
배열을 복사하는 프로그램입니다.*/

#include <stdio.h>
#define SIZE 10

void array_copy(int* A, int* B, int size)
{
	int i;
	for (i = 0; i < size; i++)                  //배열 A의 요소들을 배열 B로 복사하는 반복문
		B[i] = A[i];
}

int main()
{
	int A[SIZE] = { 1,2,3 };                  //배열 A 선언
	int B[SIZE] = { 0 };                      //배열 B 선언
	int i;                                    //반복 제어 변수 선언

	array_copy(A, B, SIZE);                   //함수 호출

	printf("A[] = {");                        //출력할 배열 요소들의 틀

	for (i = 0; i < SIZE; i++)                //배열의 요소를 출력하는 반복문
		printf("%d ", A[i]);

	printf("}\n");

	printf("B[] = {");                        //출력할 배열 요소들의 틀

	for (i = 0; i < SIZE; i++)                //배열의 요소를 출력하는 반복문
		printf("%d ", B[i]);

	printf("}");

	return 0;
}