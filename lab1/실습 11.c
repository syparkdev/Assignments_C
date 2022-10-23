#include <stdio.h>
#include <Windows.h>

int main()
{
	printf("\a"); //경고음
	printf("화재가 발생하였습니다."); //메시지
	Sleep(1000); //1초 쉬기
	printf("\a"); //경고음

	return 0;
}