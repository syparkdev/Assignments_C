/*1613665 영어영문학부 박세연
21-04-27
포인터 변수를 사용하여 2개의 정수의 합과 차를 동시에 반환하는 프로그램입니다.*/

#include <stdio.h>

void get_sum_diff(int x, int y, int* p_sum, int* p_diff)    //포인터 변수를 받아 합과 차를 계산하는 함수
{
	*p_sum = x + y;                                         //x + y의 값을 sum에 보관
	*p_diff = x - y;                                        //x - y의 값을 diff에 보관
}

int main()
{
	int x = 200, y = 100;                                   //x와 y 선언
	int sum = 0, diff = 0;                                  //sum과 diff 초기화
	int* psum = &sum, * pdiff = &diff;                      //포인터 변수에 sum과 diff 지정

	get_sum_diff(x, y, psum, pdiff);

	printf("원소들의 합=%d\n", sum); 
	printf("원소들의 차=%d", diff);

	return 0;
}