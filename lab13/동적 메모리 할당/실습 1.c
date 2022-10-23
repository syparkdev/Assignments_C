/*1613665 박세연 영어영문학부
21-06-01
길이가 100인 n개의 문자열을 저장하는데 필요한 동적 메모리를 할당하는 프로그램입니다.*/

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main()
{
	char** A = NULL;
	int i, n = 0;

	printf("문자열의 개수: ");
	scanf("%d", &n);
	getchar();

	if ((A = (char**)malloc(sizeof(char*) * n)) != NULL)        //포인터 배열에 필요한 크기만큼의 동적 메모리 할당
	{
		for (i = 0; i < n; i++)
			A[i] = (char*)malloc(sizeof(char) * 100);
	}

	for (i = 0; i < n; i++)                                     //문자열을 입력받는 반복문
	{
		printf("문자열을 입력하시오: ");
		gets_s(A[i], 100);
	}

	printf("[");

	for (i = 0; i < n; i++)                                     //문자열을 출력하는 반복문
	{
		printf("\"%s\"", A[i]);
		if (i != (n - 1))
			printf(" ");
	}

	printf("]");

	free(A);

	return 0;
}