/*영어영문학부 1613665 박세연
21-03-18
구의 반지름을 입력받아 표면적과 체적을 구하는 코드입니다.*/

#include <stdio.h>
#define pi 3.141592                          //파이값을 정의하는 기호 상수

int main()
{
	double rad, sfc, vol;                    //반지름과 표면적, 체적을 입력받을 변수

	printf("구의 반지름을 입력하시오:");     //반지름을 입력하라는 메시지
	scanf("%lf", &rad);                      //반지름을 입력받는 기능

	sfc = 4 * pi * rad * rad;                //표면적을 구하는 계산
	vol = 4 / 3 * pi * rad * rad * rad;      //체적을 구하는 계산

	printf("표면적은 %10.6lf입니다.\n", sfc);//표면적을 알려주는 메시지
	printf("체적은 %10.6lf입니다.", vol);    //체적을 알려주는 메시지

	return 0;
}