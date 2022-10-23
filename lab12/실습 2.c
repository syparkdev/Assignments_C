/*1613665 박세연 영어영문학부
* 21-05-25
두 개의 텍스트 파일을 서로 비교하는 프로그램입니다.*/

#include <stdio.h>
#include <string.h>

int main()
{
	FILE* fp1 = NULL, * fp2 = NULL;
	char name1[100] = { 0 }, name2[100] = { 0 };
	char str1[100] = { 0 }, str2[100] = { 0 };

	printf("첫번째 파일 이름:");                       //파일 이름을 입력하라는 메시지
	scanf("%s", name1);                                //파일 이름을 입력받는 기능
	printf("두번째 파일 이름:");
	scanf("%s", name2);

	fp1 = fopen(name1, "r");                           //파일 열기
	if (fp1 == NULL)
	{
		printf("파일을 열 수 없습니다.\n");
		return 0;
	}

	fp2 = fopen(name2, "r");
	if (fp2 == NULL)
	{
		printf("파일을 열 수 없습니다.\n");
		return 0;
	}

	while (!feof(fp1) && !feof(fp2))                   //첫번째 파일과 두번째 파일의 각 문장을 비교하는 반복문
	{
		fgets(str1, 100, fp1);
		fgets(str2, 100, fp2);
		if (strcmp(str1, str2) != 0)                   //다른 문장 발견 시 출력 후 break
		{
			printf("<<%s", str1);
			printf(">>%s", str2);

			break;
		}
	}

	if (feof(fp1) && feof(fp2))                       //다른 문장을 발견하지 못한 채로 두 파일이 다 끝난 경우
		printf("파일은 서로 일치함\n");               //일치한다는 메시지 출력

	fclose(fp1);
	fclose(fp2);

	return 0;
}