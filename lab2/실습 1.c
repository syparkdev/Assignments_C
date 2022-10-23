/*영어영문학부 1613665 박세연
21-03-17
두 개의 실수를 입력받아 합, 차, 곱, 몫을 알려주는 코드입니다.*/

#include <stdio.h>

int main()
{
	double num1, num2, sum, dif, mul, quo; //입력받을 두 개의 실수와 합, 차, 곱, 몫을 입력할 변수들

	printf("실수를 입력하시오:");          //실수들을 입력하라는 메시지
	scanf("%lf %lf", &num1, &num2);        //실수들을 입력받는 기능

	sum = num1 + num2;                     //합 계산
	dif = num1 - num2;                     //차 계산
	mul = num1 * num2;                     //곱 계산
	quo = num1 / num2;                     //몫 계산

	printf("%7.6lf\t", sum);               //합을 알려주는 메시지
	printf("%7.6lf\t", dif);               //차을 알려주는 메시지
	printf("%7.6lf\t", mul);               //곱을 알려주는 메시지
	printf("%7.6lf\t", quo);               //몫을 알려주는 메시지

	return 0;
}
