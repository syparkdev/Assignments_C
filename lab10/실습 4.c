/*1613665 박세연 영어영문학부
* 21-05-12
* 원의 면적과 둘레를 구하는 함수를 사용하는 프로그램입니다.*/

#include <stdio.h>
#define PIE 3.14

typedef struct                                //좌표를 표현할 구조체 정의
{
	int x, y;
} point;

typedef struct                                //원을 표현할 구조체 정의
{
	point center;
	double radius;
} CIRCLE;

double area(CIRCLE c)                         //원의 면적을 구하는 함수
{
	return c.radius * c.radius * PIE;
}

double perimeter(CIRCLE c)                    //원의 둘레를 구하는 함수
{
	return c.radius * 2 * PIE;
}

int main()
{
	CIRCLE c1 = { {0,0},10 };                //원 선언

	printf("원의 중심점:%d %d\n", c1.center.x, c1.center.y);
	printf("원의 반지름:%lf\n", c1.radius);
	printf("원의 면적=%lf\n", area(c1));
	printf("원의 둘레=%lf\n", perimeter(c1));

	return 0;
}