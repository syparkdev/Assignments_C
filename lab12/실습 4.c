/*1613665 �ڼ��� ������к�
* 21-05-25
������ �Ǽ� 100���� �ؽ�Ʈ ���ϰ� ���� ���Ͽ� �����ϴ� ���α׷��Դϴ�.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	FILE* fp1 = NULL, * fp2 = NULL;
	int i = 0, num[100];
	int* pn = NULL;

	fp1 = fopen("sample1.txt", "wt");          //���� ����
	if (fp1 == NULL)
	{
		printf("������ �� �� �����ϴ�.");
		return 1;
	}

	fp2 = fopen("sample2.txt", "wb");
	if (fp2 == NULL)
	{
		printf("������ �� �� �����ϴ�.");
		return 1;
	}

	srand(time(NULL));

	for (i = 0; i < 100; i++)                //�ؽ�Ʈ ���ϰ� ���� ���Ͽ� ���� 100���� �Է��ϱ�
	{
		num[i] = rand();
		fprintf(fp1, "%d\n", num[i]);
		fwrite(num, sizeof(int), 1, fp2);
	}

	fclose(fp1);                             //���� �ݱ�
	fclose(fp2);

	return 0;
}