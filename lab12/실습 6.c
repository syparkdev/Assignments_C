/*1613665 박세연 영어영문학부
* 21-05-25
파일에서 특정한 단어를 찾아 파일 이름과 단어가 위치한 줄 번호를 출력하는 프로그램입니다.*/

#include <stdio.h>
#include <string.h>

int main()
{
	FILE* fp = NULL;
	int line = 0;
	char word[30] = { 0 };
	char name[100] = { 0 };
	char buffer[100] = { 0 };
	char* ptr = NULL;

	printf("파일 이름:");                   //파일 이름을 입력하라는 메시지
	scanf("%s", name);
	printf("탐색할 단어:");                 //탐색할 단어를 입력하라는 메시지
	scanf("%s", word);

	fp = fopen(name, "r");                  //파일 열기
	if (fp == NULL)
	{
		printf("파일을 열 수 없습니다.");
		return 1;
	}

	while (!feof(fp))                       //파일이 끝나지 않은동안 반복
	{
		fgets(buffer, 100, fp);             //버퍼에 문자열을 받아오는 기능
		line++;                             //몇번째 줄인지 세는 기능
		ptr = strstr(buffer, word);         //버퍼에서 찾는 단어의 위치를 포인터에 대입
		if (ptr != NULL)                    //문자열에서 단어를 찾았을 경우에 수행하는 조건문
		{
			printf("%s:%d  %s", name, line, buffer);  //형식에 맞게 결과 출력
		}
	}

	fclose(fp);                            //파일 닫기

	return 0;
}