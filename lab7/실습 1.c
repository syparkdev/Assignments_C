/*1613665 박세연 영어영문학부
21-04-26
배열에 난수를 생성하여 최댓값과 최솟값을 출력하는 프로그램입니다.*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main()
{
	srand(time(NULL));                            //난수를 랜덤하게 생성하게 하는 실행문
	int i, j, temp, least;                        //반복 제어 변수, 임시 변수, 최솟값의 인덱스 변수
	int arr[SIZE] = { 0 };                        //배열 초기화

	for (i = 0; i < SIZE; i++)                    //배열에 랜덤한 정수를 할당하는 반복문
		arr[i] = rand();

	for (i = 0; i < SIZE - 1; i++)                //선택 정렬을 수행하는 반복문
	{
		least = i;                                //least에 정수의 크기를 비교할 인덱스 할당
		for (j = i + 1; j < SIZE; j++)            //least에 배열에서 가장 작은 값의 인덱스 할당하는 반복문
			if (arr[j] < arr[least])
				least = j;

		temp = arr[i];                            //배열의 가장 앞에 최솟값 할당
		arr[i] = arr[least];
		arr[least] = temp;
	}

	printf("최댓값은 %d\n최솟값은 %d", arr[9], arr[0]);   //최댓값과 최솟값을 출력

	return 0;
}