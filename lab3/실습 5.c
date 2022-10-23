/*영어영문학부 1613665 박세연
21-03-23
x,y 좌표를 입력받아 좌표가 속하는 사분면을 출력하는 프로그램입니다.*/

#include <stdio.h>

int main()
{
	int x, y;                //입력받을 좌표의 이름

	printf("좌표(x,y): ");   //좌표를 입력하라는 메시지
	scanf("%d %d", &x, &y);  //좌표를 입력받는 기능

	if (x > 0 && y > 0)      //x와 y가 둘 다 양수인지 체크하는 조건식
		printf("1사분면");   
	else if (x < 0 && y > 0) //x가 음수이면서 y가 양수인지 체크하는 조건식
		printf("2사분면");
	else if (x < 0 && y < 0) //x와 y가 둘 다 음수인지 체크하는 조건식
		printf("3사분면");
	else
		printf("4사분면");

	return 0;
}