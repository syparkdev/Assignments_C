/*1613665 �ڼ��� ������к�
* 21-05-25
�ؽ�Ʈ ������ ���� ���� ���� ���ڸ� �빮�ڷ� �ٲپ� ���ο� ���Ͽ� �����ϴ� ���α׷��Դϴ�.*/

#include <stdio.h>
#include <ctype.h>

int main()
{
	FILE* fp1 = NULL, *fp2 = NULL;
	char name1[100] = { 0 }, name2[100] = { 0 };
	char buffer[100] = { 0 };
	char letter;

	printf("ù��° ���� �̸�:");                //���� �̸� �ޱ�
	scanf("%s", name1); 
	printf("�ι�° ���� �̸�:");
	scanf("%s", name2);

	if ((fp1 = fopen(name1, "r")) == NULL)       //���� ����
	{
		printf("������ �� �� �����ϴ�.\n");
		return 1;
	}
	if ((fp2 = fopen(name2, "w")) == NULL)
	{
		printf("������ �� �� �����ϴ�.\n");
		return 1;
	}

	while (!feof(fp1))
	{
		letter = fgetc(fp1);                      //���Ͽ��� ���� �ϳ� �б�
		
		if ('a' <= letter && letter <= 'z')       //���ڰ� �ҹ����� ���
			letter = toupper(letter);             //�빮�ڷ� ��ȯ		
		fputc(letter, fp2);                       //���� ���Ͽ� ���� �ϳ� ����

	}

	fclose(fp2);                                  //���� ���� �ݱ�

	if ((fp2 = fopen(name2, "r")) == NULL)        //���� ���� �б� ���� ����
	{
		printf("������ �� �� �����ϴ�.\n");
		return 1;
	}

	while (!feof(fp2))                            //���� ���� ���
	{
		letter = fgetc(fp2);
		printf("%c", letter);
	}
	
	fclose(fp1);                                  //���� �ݱ�
	fclose(fp2);

	return 0;
}