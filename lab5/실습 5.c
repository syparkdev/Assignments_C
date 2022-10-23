/*영어영문학부 1613665 박세연
21-04-05
랜덤으로 답을 생성하여 동전 던지기 게임을 하는 프로그램입니다.*/

#include <stdio.h>
#include <stdlib.h>

int b_rand()                         //랜덤으로 게임의 승패를 생성하는 함수
{
	int coin;                        //1 혹은 0의 값을 가질 동전을 의미하는 변수                     

	srand(time(NULL));               //고정되지 않은 난수를 만드는 실행문
	coin = rand() % 2;               //0 또는 1의 값을 생성하는 식
	
	return coin;                     //생성한 난수를 반환
}
int main()
{
	while(1)
	{
		int answer,user;             //b_rand 함수의 반환값을 받을 함수와 사용자의 답을 입력받을 함수
		char again;                  //재도전 여부를 입력받을 함수

		answer = b_rand();           //b_rand 함수의 반환값을 answer에 대입

		printf("앞면 또는 뒷면 (1 또는 0): ");   //사용자의 답을 입력하라는 메시지
		scanf("%d", &user);                      //사용자의 답을 입력받는 기능

		if (user == answer)                      //게임의 결과를 알려주는 조건문
			printf("맞았습니다.\n");
		else
			printf("틀렸습니다.\n");

		printf("계속하시겠습니까? (y 또는 n): "); //재도전 여부를 묻는 메시지
		scanf(" %c", &again);                     //재도전 여부를 입력받는 기능

		if (again == 'n')                         //사용자가 재도전 여부에 n을 입력할 경우 프로그램 종료
			break;
	}

	return 0;
}