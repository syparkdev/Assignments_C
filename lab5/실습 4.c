/*영어영문학부 1613665 박세연
21-04-05
각도를 받아 사인값을 반환하는 함수를 작성하여 
0도부터 180도까지의 각도를 사인 함수 값으로 출력하는 프로그램입니다. */

#include <stdio.h>
#include <math.h>

#define PI     3.141592                         //파이 값으로 사용하기 위한 기호상수

double sin_degree(double degree)                //각도를 입력받아 사인값을 반환하는 함수
{
	double answer = 0;                          //반환할 값을 보관할 변수 초기화
	answer = sin((PI * degree) / 180.0);        
	//각도를 받아 라디안으로 변환하여 sin함수에 입력한 뒤, 결과값을 answer에 다시 입력
	return answer;                              //answer를 반환
}

int main()
{
	double ipt_dgr;                             //입력할 각도 겸 반복 제어 변수 선언

	for (ipt_dgr = 0; ipt_dgr <= 180; ipt_dgr += 10) //0도에서 180도까지 10도씩 증가하며 반복
		printf("sin(%f)의 값은 %f\n", ipt_dgr, sin_degree(ipt_dgr)); //입력한 각도와 결과값을 출력하는 메시지

	return 0;
}