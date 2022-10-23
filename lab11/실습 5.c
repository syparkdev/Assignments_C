/*1613665 영어영문학부 박세연
21-05-24
2차원 배열을 복사하는 프로그램입니다.*/

#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b)                        //qsort에 사용하기 위한 compare함수
{
	return (*(int*)a - *(int*)b);
}

void arrayMerge(int* a, int an, int* b, int bn, int* c, int cn)  //배열 병합 함수
{
	int i;

	for (i = 0; i < an; i++)                                     //a배열을 c배열에 복사
		c[i] = a[i];
	for (i = 0; i < bn; i++)                                     //b배열을 c배열에 복사   
		c[an + i] = b[i];

	qsort(c, cn, sizeof(int), compare);                          //c배열 정렬
}

void printArray(int* arr, int n)                                 //배열 출력 함수
{
	int i;

	printf("{");
	for (i = 0; i < n; i++)
	{
		printf("%d", *arr++);
		if (i != n - 1)
			printf(",");
	}
	printf("}\n");
}

int main()
{
	int a[6] = { 1,2,5,7,9,14 };
	int b[5] = { 2,3,6,8,13 };
	int c[11] = { 0 };

	int d[] = { 9,7,5,3,1 };

	arrayMerge(a, 6, b, 5, c, 11);

	printf("첫번째배열  ");
	printArray(a, 6);
	printf("두번째배열  ");
	printArray(b, 5);
	printf("결과배열  ");
	printArray(c, 11);

	return 0;
}