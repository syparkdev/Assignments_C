/*1613665 박세연 영어영문학부
21-05-11
영어 이름을 대문자로 입력받아 위치를 바꾸고 소문자로 변환하여 출력하는 프로그램입니다.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char name[50];                                  //이름을 입력받을 배열
	char* sur;                                      //성을 분리해서 보관할 포인터 변수
	char* given;                                    //이름을 분리해서 보관할 포인터 변수
	int i;                                          //반복 제어 변수
	
	printf("성과 이름을 대문자로 입력하시오:");     //이름을 대문자로 입력하라는 메시지
	gets_s(name, 50);                               //이름을 입력받는 기능

	for (i = 0; i < strlen(name); i++)              //대문자로 입력받은 이름을 소문자로 바꾸는 기능
	{
		if (isupper(name[i]))
			name[i] = name[i] + 32;
	}

	sur = strtok(name, " ");                        //성을 분리해서 변수에 대입
	given = strtok(NULL, " ");                      //이름을 분리해서 변수에 대입

	printf("%s, %s\n", given, sur);                 //이름과 성의 순서를 바꾸어 출력

	return 0;
}