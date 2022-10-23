/*영어영문학부 1613665 박세연
21-03-23
월 번호를 받아 영단어로 출력하는 프로그램입니다*/

#include <stdio.h>

int main()
{
	int mon;

	printf("월번호를 입력하시오: "); //월 번호를 입력하라는 메시지
	scanf("%d", &mon);               //월 번호를 받는 기능

	switch (mon)                     //월 번호에 따라 케이스를 나눠주는 스위치문
	{
	case 1:
		printf("Jan");
		break;
	case 2:
		printf("Feb");
		break;
	case 3:
		printf("Mar");
		break;
	case 4:
		printf("Apr");
		break;
	case 5:
		printf("May");
		break;
	case 6:
		printf("Jun");
		break;
	case 7:
		printf("Jul");
		break;
	case 8:
		printf("Aug");
		break;
	case 9:
		printf("Sep");
		break;
	case 10:
		printf("Oct");
		break;
	case 11:
		printf("Nov");
		break;
	case 12:
		printf("Dec");
		break;
	}

	return 0;
}