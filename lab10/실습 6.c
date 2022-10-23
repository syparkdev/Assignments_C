/*1613665 영어영문학부 박세연
21-05-13
트럼프 카드를 초기화하고 값을 출력하는 프로그램입니다.*/

#include <stdio.h>

typedef struct                                     //card 구조체 선언
{
	int value;
	char suit;
} card;

int main()
{
	int i, j;
	card trump[53];                     
	//카드의 배열로 트럼프 선언, 반복문에 사용하기 적합하도록 0번째를 사용하지 않고 53칸으로 선언
	char shape[4] = { 'c','d','h','s' };
	//카드의 수트를 캐릭터 타입의 배열로 선언

	for (i = 1; i <= 4; i++)             
		//수트를 차례로 바꾸기 위한 반복문, 수트와 숫자의 곱을 인덱스로 사용하기 위해 1부터 시작
	{
		for (j = 1; j <= 13; j++)                 //숫자를 차례로 바꾸기 위한 반복문
		{
			trump[i * j].suit = shape[i - 1];     //수트 자리에 shape 배열의 i - 1번째 캐릭터를 대입
			trump[i * j].value = j;               //값 자리에 숫자를 바꾸는 반복 제어 변수인 j 값을 대입
			printf("%d:%c ", trump[i * j].value, trump[i * j].suit); //초기화를 마친 카드를 출력
		}
		printf("\n");                             //수트가 바뀔 때 줄바꿈
	}

	return 0;
}