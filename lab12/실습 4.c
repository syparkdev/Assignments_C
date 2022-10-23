/*1613665 박세연 영어영문학부
* 21-05-25
임의의 실수 100개를 텍스트 파일과 이진 파일에 저장하는 프로그램입니다.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	FILE* fp1 = NULL, * fp2 = NULL;
	int i = 0, num[100];
	int* pn = NULL;

	fp1 = fopen("sample1.txt", "wt");          //파일 열기
	if (fp1 == NULL)
	{
		printf("파일을 열 수 없습니다.");
		return 1;
	}

	fp2 = fopen("sample2.txt", "wb");
	if (fp2 == NULL)
	{
		printf("파일을 열 수 없습니다.");
		return 1;
	}

	srand(time(NULL));

	for (i = 0; i < 100; i++)                //텍스트 파일과 이진 파일에 난수 100개씩 입력하기
	{
		num[i] = rand();
		fprintf(fp1, "%d\n", num[i]);
		fwrite(num, sizeof(int), 1, fp2);
	}

	fclose(fp1);                             //파일 닫기
	fclose(fp2);

	return 0;
}