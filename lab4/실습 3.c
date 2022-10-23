/*1613665 박세연
21-03-30
메뉴를 선택하여 사칙연산을 수행하는 프로그램입니다.*/

#include <stdio.h>

void star_bar(int num)                        //곱셈기호 특수문자로 메뉴 구분선 만드는 함수 
{
	int i;
	for (i = 0; i < num; i++)                 //인자로 받은 반복 횟수만큼 곱셈기호를 출력하는 반복문
		printf("*");
	printf("\n");
}

int main()
{
	char op = 0;                                        //연산의 종류를 보관할 변수
	int num1 = 0, num2 = 0, answer = 0;                 //피연산자 두 개와 연산 결과를 보관할 변수

	while (1)                                           //메뉴 이하를 무한하게 반복해서 출력하는 반복문
	{
		star_bar(25);                                   //메뉴 구성
		printf("A --- Add\n");
		printf("S --- Subtract\n");
		printf("M --- Multiply\n");
		printf("D --- Divide\n");
		printf("Q --- Quit\n");
		star_bar(25);

		do                       //선택 가능한 메뉴를 고를 때까지 연산을 선택하라는 메시지를 무한반복하는 반복문
		{
			printf("연산을 선택하시오: ");
			scanf(" %c", &op);
			
		} while (op != 'A' && op != 'S' && op != 'M' && op != 'D' && op != 'Q');
		//선택 가능한 메뉴를 선택할 시 반복문을 종료하는 조건

		if (op == 'Q')                      //선택 가능한 메뉴 중 Q를 선택한 경우 반복문을 종료하는 조건
			break;
		else
		{
			printf("두 수를 공백으로 분리하여 입력하시오: ");       //피연산자를 입력하라는 메시지
			scanf("%d %d", &num1, &num2);                           //피연산자를 입력받는 기능

			if (op == 'A')                                          //선택한 연산에 따라 계산을 수행하는 실행문
				answer = num1 + num2;
			else if (op == 'S')
				answer = num1 - num2;
			else if (op == 'M')
				answer = num1 * num2;
			else
				answer = num1 / num2;

			printf("%d\n", answer);                                 //결과를 출력하는 메시지
		}
	}
	return 0;
}
