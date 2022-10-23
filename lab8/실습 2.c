/*1613665 영어영문학부 박세연
21-04-27
정수 배열의 요소들을 화면에 출력하는 프로그램입니다.*/

#include <stdio.h>
#define SIZE 10

void array_print(int* A, int size)
{
	int i;                                    //반복 제어 변수
	printf("A[] = {");                        //출력할 배열 요소들의 틀
	
	for (i = 0; i < size; i++)                //배열의 요소를 출력하는 반복문
		printf("%d ", A[i]);
	
	printf("}");
}

int main()
{
	int A[SIZE] = { 1,2,3,4,5 };              //배열 선언

	array_print(A, SIZE);                     //함수 호출

	return 0;
}