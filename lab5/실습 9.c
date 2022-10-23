/*영어영문학부 1613665 박세연
* 21-04-05
* 사용자에게 피연산자를 입력받고 사칙연산을 수행하는 프로그램입니다.*/

#include <stdio.h>

void Bar(int n)                       //입력받은 길이만큼 메뉴의 구분선을 출력하는 함수
{
	int i;
	for (i = 0; i < n; i++)
		printf("=");
	printf("\n");
}

void Menu()                           //메뉴를 출력하는 함수
{
	Bar(25);
	printf("MENU\n");
	Bar(25);
	printf("1.\t덧셈\n");
	printf("2.\t뺄셈\n");
	printf("3.\t곱셈\n");
	printf("4.\t나눗셈\n");
	printf("5.\t나머지\n");
}

double Calc(int op, int n1, int n2)  //메뉴와 피연산자를 인수로 받아 사칙연산과 나머지 연산을 하는 함수
{
	double result = 0.0;

	if (op == 1)
		result = n1 + n2;
	else if (op == 2)
		result = n1 - n2;
	else if (op == 3)
		result = n1 * n2;
	else if (op == 4)
		result = n1 / n2;
	else if (op == 5)
		result = n1 % n2;

	return result;

}

int main()
{
	char again = 'y';                      //반복문 종료 조건을 받는 변수, y로 초기화
	int route, num1, num2;                 //연산의 종류와 피연산자를 보관하는 변수
	double answer = 0;                     //계산의 결과를 보관하는 변수

	while (again == 'y')
	{
		Menu();
		
		printf("6.\t원하는 메뉴를 선택하시오(1-5): ");        //연산의 종류를 입력하라는 메시지
		scanf("%d", &route);                                  //연산의 종류를 입력받는 기능

		printf("7.\t숫자 2개를 입력하시오: ");                //피연산자를 입력하라는 메시지
		scanf("%d %d", &num1, &num2);                         //피연산자를 입력받는 기능

		answer = Calc(route, num1, num2);                     //연산 함수를 호출하여 결과값을 변수에 대입하는 식

		printf("8.\t완산결과: %lf \n", answer);               //결과값을 출력하는 메시지

		printf("9.\t계속하려면 y를 누르시오.");               //계산을 반복할지 묻는 메시지
		scanf(" %c", &again);                                 //계산을 반복하는 변수를 받는 기능

	}
	return 0;
}