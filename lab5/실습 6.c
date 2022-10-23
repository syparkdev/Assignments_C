/*영어영문학부 1613665 박세연
21-04-05
사용자로부터 값을 입력받은 개수만큼 별 특수문자를 출력하는 프로그램입니다.
*/

#include <stdio.h>

void print_value(int n)              //인수만큼의 별 특수문자를 출력하는 함수
{
	int i;                          
	for (i = 0; i < n; i++)
		printf("*");
	printf("\n");
}

int main()
{
	int val;                        //사용자에게 별을 출력할 횟수를 입력받을 변수

	while (1)
	{
		printf("값을 입력하시오(종료는 음수): ");   //출력 횟수를 입력하라는 메시지
		scanf("%d", &val);                          //출력 횟수를 입력받는 기능
		print_value(val);                           //횟수만큼 별을 출력하는 함수 호출

		if (val < 0)                                //횟수가 음수일 경우 반복문 종료
			break;
	}
	return 0;
}