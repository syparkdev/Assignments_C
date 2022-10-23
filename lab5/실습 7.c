/*영어영문학부 1613665 박세연
21-04-05
두 점 사이의 거리를 계산하는 프로그램입니다.*/

#include <stdio.h>
#include <math.h>

double get_distance(double x1, double y1, double x2, double y2)      //두 점 사이의 거리를 계산하는 함수
{
	double distance;
	distance = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	return distance;
}

int main()
{
	double _x1, _x2, _y1, _y2;

	printf("첫번째 점의 좌표를 입력하십시오: (x,y) ");               //첫번째 좌표를 입력하라는 메시지
	scanf("%lf %lf", &_x1, &_y1);                                    //첫번째 좌표를 입력받는 기능

	printf("두번째 점의 좌표를 입력하십시오: (x,y) ");               //두번째 좌표를 입력하라는 메시지         
	scanf("%lf %lf", &_x2, &_y2);                                    //두번째 좌표를 입력받는 기능

	printf("두 점 사이의 거리는 %lf 입니다.\n", get_distance(_x1, _y1, _x2, _y2));
	//두 점 사이의 거리를 출력하는 메시지

	return 0;
}