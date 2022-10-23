/*영어영문학부 1613665 박세연
21-04-12
정수를 입력받아 그 정수의 자리수를 계산하는 프로그램입니다.*/

#include <stdio.h>

int numcnt(int _num)                            //자릿수를 세는 함수
{
	static int cnt = 0;                         //센 자릿수를 저장할 정적 지역변수

	if (_num == 0)                              //재귀함수의 종료 조건
		return cnt;                             //종료하며 센 자릿수를 반환
	else
	{ 
		numcnt(_num / 10);                      //끝자리부터 하나씩 제거하는 재귀함수
		cnt++;                                  //자릿수를 1씩 증가
	}
}

int main()
{
	int num;                                    //입력받을 정수를 보관할 변수

	printf("정수를 입력하시오: ");              //정수를 입력하라는 메시지
	scanf("%d", &num);                          //정수를 입력받는 기능

	printf("자릿수의 개수: %d", numcnt(num));   //자릿수의 개수를 출력하는 메시지

	return 0;
}