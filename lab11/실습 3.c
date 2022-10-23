/*1613665 영어영문학부 박세연
21-05-24
문자열의 배열을 인수로 받아서 문자열을 정렬시키는 프로그램입니다.*/

#include <stdio.h>
#include <string.h>

void sort_strings(char* s[], int size)   //버블 정렬을 사용하여 인수로 받은 문자열 포인터의 배열을 정렬하는 함수
{
	int i, j, least;
	char* temp;

	for (i = 0; i < size; i++)
	{
		least = i;

		for (j = i + 1; j < size; j++)
		{
			if (strcmp(s[j], s[least]) < 0)
				least = j;
		}

		temp = s[i];
		s[i] = s[least];
		s[least] = temp;
	}
}

int main()
{
	int i;

	char* str[3] =                       //순서를 섞은 문자열 포인터 배열
	{
		"src",
		"dst",
		"mycopy"
	};

	sort_strings(str, 3);                //정렬 함수 호출

	for (i = 0; i < 3; i++)              //결과 출력
		printf("%s\n", str[i]);

	return 0;
}