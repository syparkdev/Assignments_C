/*영어영문학부 1613665 박세연
21-03-18
x,y좌표를 입력받아 사분면을 구하는 코드입니다.*/

#include <stdio.h>

int main()
{
	int x, y;                                          //좌표를 입력받을 변수 

	printf("x 좌표를 입력하시오:");                    //x좌표를 입력하라는 메시지
	scanf("%d", &x);                                   //x좌표를 입력받는 기능
	printf("y 좌표를 입력하시오:");                    //y좌표를 입력하라는 메시지
	scanf("%d", &y);                                   //y좌표를 입력받는 기능

	(x > 0 && y > 0) ? printf("1사분면") : printf(""); //좌표가 1사분면에 있는지 판단하는 조건 연산자
	(x < 0 && y > 0) ? printf("2사분면") : printf(""); //좌표가 2사분면에 있는지 판단하는 조건 연산자
	(x < 0 && y < 0) ? printf("3사분면") : printf(""); //좌표가 3사분면에 있는지 판단하는 조건 연산자
	(x > 0 && y < 0) ? printf("4사분면") : printf(""); //좌표가 4사분면에 있는지 판단하는 조건 연산자

	return 0;
}