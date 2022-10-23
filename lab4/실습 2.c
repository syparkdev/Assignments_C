/*1613665 박세연
21-03-30
반복 루프를 사용하여 별 모양 특수문자로 패턴을 출력하는 프로그램입니다.*/

#include <stdio.h>

int main()
{
	int line, star, space;

	for (line = 0; line < 7; line++)           //줄 개수를 정하는 반복문
	{	
		for (space = 6; space >= 0; space--)   //스페이스 개수를 정하는 반복문
		{
			if (space > line)                  //각 줄에 스페이스가 들어갈 자리를 판단하는 조건
				printf(" ");
			else
				printf("*");
		}
		printf("\n");                          //한 줄이 끝날 때마다 줄바꿈
	}

	return 0;
}
