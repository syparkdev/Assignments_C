/*1613665 박세연 영어영문학부
* 21-05-12
* 은행계좌를 나타내는 구조체를 사용하는 프로그램입니다.*/

#include <stdio.h>
#include <string.h>

int main()
{
	struct account                //계좌를 표현할 구조체 선언
	{
		int number;
		char name[20];
		int balance;
	};

	struct account client_1;           //client_1이라는 계좌 생성
	client_1.number = 1;               //계좌 번호에 1 대입
	strcpy(client_1.name, "홍길동");   //계좌 이름에 홍길동 대입
	client_1.balance = 100000;         //계좌 잔액에 100000 대입

	printf("{ %d,%s,%d }", client_1.number, client_1.name, client_1.balance);
	//생성한 계좌 정보 출력

	return 0;
}