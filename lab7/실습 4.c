/*1613665 박세연 영어영문학부
21-04-26
2차원 배열의 행과 열의 합계를 계산하는 프로그램입니다.*/

#include <stdio.h>
#include <math.h>
#define SIZE 10

int main()
{
	double arr[SIZE] = { 0 };                        //실수의 배열 선언
	int i;                                           //반복 제어 변수 선언
	double sum = 0, avg = 0, dvt = 0;                //합, 평균, 표준편차를 보관할 변수 선언

	for (i = 0; i < SIZE; i++)                       //배열에 값을 입력받는 반복문
	{
		printf("[%d] 입력: ", i + 1);
		scanf("%lf", &arr[i]);
	}

	for (i = 0; i < SIZE; i++)                       //배열의 값을 더하는 반복문
		sum += (double)arr[i];


	avg = sum / SIZE;                                //더한 값으로 평균을 구하는 계산
	sum = 0;                                         //표준편차 계산에 사용하기 위해 sum을 초기화

	for (i = 0; i < SIZE; i++)                       //분산을 구하는 과정
		sum += ((arr[i] - avg) * (arr[i] - avg));

	dvt = sqrt(sum / SIZE);                          //분산의 제곱근으로 표준편차를 계산

	printf("평균값은 %lf\n", avg);                   //평균 출력
	printf("표준편차값은 %lf", dvt);                 //표준편차 출력

	return 0;
}