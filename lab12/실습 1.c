/*1613665 박세연 영어영문학부
* 21-05-25
텍스트 파일을 열어 파일 안의 문자를 대문자로 바꾸어 새로운 파일에 저장하는 프로그램입니다.*/

#include <stdio.h>
#include <ctype.h>

int main()
{
	FILE* fp1 = NULL, *fp2 = NULL;
	char name1[100] = { 0 }, name2[100] = { 0 };
	char buffer[100] = { 0 };
	char letter;

	printf("첫번째 파일 이름:");                //파일 이름 받기
	scanf("%s", name1); 
	printf("두번째 파일 이름:");
	scanf("%s", name2);

	if ((fp1 = fopen(name1, "r")) == NULL)       //파일 열기
	{
		printf("파일을 열 수 없습니다.\n");
		return 1;
	}
	if ((fp2 = fopen(name2, "w")) == NULL)
	{
		printf("파일을 열 수 없습니다.\n");
		return 1;
	}

	while (!feof(fp1))
	{
		letter = fgetc(fp1);                      //파일에서 문자 하나 읽기
		
		if ('a' <= letter && letter <= 'z')       //문자가 소문자일 경우
			letter = toupper(letter);             //대문자로 변환		
		fputc(letter, fp2);                       //목적 파일에 문자 하나 쓰기

	}

	fclose(fp2);                                  //목적 파일 닫기

	if ((fp2 = fopen(name2, "r")) == NULL)        //목적 파일 읽기 모드로 열기
	{
		printf("파일을 열 수 없습니다.\n");
		return 1;
	}

	while (!feof(fp2))                            //목적 파일 출력
	{
		letter = fgetc(fp2);
		printf("%c", letter);
	}
	
	fclose(fp1);                                  //파일 닫기
	fclose(fp2);

	return 0;
}