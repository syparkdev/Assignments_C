/*1613665 박세연 영어영문학부
* 21-05-25
텍스트 파일을 읽어서 각 줄의 앞에 줄 번호를 붙히는 프로그램입니다.*/

#include <stdio.h>

int main()
{
	FILE* fp = NULL;
	int i = 1;
	char str[100] = { 0 };

	fp = fopen("proverbs.txt", "r");               //파일 열기
	if (fp == NULL)
	{
		printf("파일을 열 수 없습니다.");
		return 1;
	}

	while (!feof(fp))                             //파일이 끝나지 않은 동안 반복하는 반복문
	{
		fgets(str, 100, fp);                      //str배열에 파일의 문자열을 읽어오는 기능
		printf("%6d:%s", i++, str);               //읽어온 문자열을 형식에 맞춰 출력
	}

	fclose(fp);                                   //파일 닫기

	return 0;
}