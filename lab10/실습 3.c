/*1613665 박세연 영어영문학부
* 21-05-12
* 두 점의 일치를 판단하는 함수를 사용하는 프로그램입니다.*/

#include <stdio.h>

typedef struct                                   //좌표를 표현하는 구조체 선언
{
	int x, y;
} point;

int equals(point* p1, point* p2)                 //두 개의 좌표가 서로 같은지 판별하는 함수
{
	if (p1->x == p2->x && p1->y == p2->y)        //각 점의 x좌표, y좌표끼리 일치할 경우 
		return 1;                                //1을 반환
	else
		return 0;
}

int main()
{
	point p1, p2;                                //좌표 2개 선언

	point* p_p1 = &p1;                           //각 좌표의 포인터 선언
	point* p_p2 = &p2;

	p1.x = 1;
	p1.y = 2;

	p2.x = 3;
	p2.y = 5;

	if (equals(p_p1, p_p2))                     //두 좌표가 같을 경우 함수에서 1 반환, 그 경우 같다는 결과 출력
		printf("(%d,%d) == (%d,%d)\n", p1.x, p1.y, p2.x, p2.y);
	else
		printf("(%d,%d) != (%d,%d)\n", p1.x, p1.y, p2.x, p2.y);

	return 0;
}