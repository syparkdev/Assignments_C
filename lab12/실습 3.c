/*1613665 박세연 영어영문학부
* 21-05-25
입력받은 이름으로 텍스트 파일을 열어 인쇄 가능한 문자의 개수를 세는 프로그램입니다.*/

#include <stdio.h>
#include <ctype.h>

int main()
{
	FILE* fp1 = NULL;
	char name[100] = { 0 };
	char letter = 0;
	int num = 0;
	int i = 1;

	printf("파일 이름을 입력하시오:");                //파일 이름을 입력하라는 메시지
	scanf("%s", name);                                //파일 이름을 입력받는 기능

	fp1 = fopen(name, "r");                           //파일 열기
	if (fp1 == NULL)
	{
		printf("파일을 열 수 없습니다.");
		return 1;
	}

	while (!feof(fp1))                                //파일이 끝나지 않은 동안 반복하는 반복문
	{
		letter = fgetc(fp1);                          //한 글자씩 분리해서 letter에 대입
		if (isprint(letter))                          //인쇄 가능한 문자인지 확인하는 조건문
			num += 1;                                 //인쇄 가능하면 num 증가
	}

	fclose(fp1);                                      //파일 닫기

	printf("문자의 개수는 %d", num);                  //결과 출력

	return 0;
}