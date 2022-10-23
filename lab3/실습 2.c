/*영어영문학부 1613665 박세연
21-03-23
컴퓨터와 가위바위보 게임을 하는 프로그램입니다.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int user, computer;         //사용자와 컴퓨터의 수를 보관하는 변수
	
	srand(time(NULL));          //고정되지 않은 난수를 만드는 실행문

	computer = rand() % 3 + 1; 	//컴퓨터의 수를 랜덤하게 골라 세 가지 경우로 한정하고 1부터 시작하게 하는 식

	printf("선택하시오(1: 가위 2: 바위 3: 보) :"); //사용자에게 수를 고르라는 메시지
	scanf("%d", &user);                            //사용자의 수를 받는 기능

	if (user > computer)                                                     //사용자가 이겼을 경우를 체크하는 조건
		printf("컴퓨터: %d, 사용자: %d >> 사용자가 이겼음", computer, user); //사용자가 이겼을 때의 메시지와 게임의 결과
	else if (user < computer)                                                //컴퓨터가 이겼을 경우를 체크하는 조건
		printf("컴퓨터: %d, 사용자: %d >> 컴퓨터가 이겼음", computer, user); //컴퓨터가 이겼을 때의 메시지와 게임의 결과
	else
		printf("컴퓨터: %d, 사용자: %d >> 비겼음", computer, user);          //비겼을 때의 메시지와 게임의 결과

	return 0;
}