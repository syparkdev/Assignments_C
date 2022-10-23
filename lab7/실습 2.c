/*1613665 박세연 영어영문학부
21-04-26
한 배열을 다른 배열에 복사하는 함수를 사용하는 프로그램입니다.*/

#include <stdio.h>
#define SIZE 10

void array_copy(int a[], int b[], int size)      //배열을 복사하는 함수
{
	int i;
	for (i = 0; i < SIZE; i++)
		b[i] = a[i];
}

int main()
{
	int a[SIZE] = { 1,2,3 };                      //복사할 배열을 선언
	int b[SIZE] = { 0 };                          //복사를 받을 배열을 선언
	int i;                                        //반복 제어 변수

	array_copy(a, b, SIZE);                       //배열 복사 함수 호출

	for (i = 0; i < SIZE; i++)                    //배열 a의 내용을 출력
		printf("%d ", a[i]);

	printf("\n");                                 //줄바꿈 문자

	for (i = 0; i < SIZE; i++)                    //배열 b의 내용을 출력
		printf("%d ", b[i]);

	return 0;
}