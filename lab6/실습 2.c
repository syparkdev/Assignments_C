/*영어영문학부 1613665 박세연
21-04-12
정적 변수를 사용하여 난수의 시드를 초기화할지 하지 않을지 판단한 후 난수를 반환하는 프로그램입니다.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void get_random()
{
	static int init = 0;                  //초기화 여부를 체크하기 위한 변수
	int num;                              //난수를 보관할 변수

	if (init == 0)                        //처음 호출된 경우
	{
		srand(time(NULL));                //시드를 초기화하는 실행문
		printf("초기화 실행\n");          //초기화를 실행했다는 메시지
		init++;                           //초기화를 했다는 표시
	}
	else                                  //초기화를 했다는 표시가 있는 경우
	{
		num = rand();                     //난수 생성
		printf("%d\n", num);              //난수 출력
	}
}

int main()
{
	int i;

	for (i = 0; i < 4; i++)               //get_random이 잘 작동하는지 확인하기 위한 반복문
		get_random();                     

	return 0;
}