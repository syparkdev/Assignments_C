/*1613665 �ڼ��� ������к�
* 21-05-25
�ؽ�Ʈ ������ �о �� ���� �տ� �� ��ȣ�� ������ ���α׷��Դϴ�.*/

#include <stdio.h>

int main()
{
	FILE* fp = NULL;
	int i = 1;
	char str[100] = { 0 };

	fp = fopen("proverbs.txt", "r");               //���� ����
	if (fp == NULL)
	{
		printf("������ �� �� �����ϴ�.");
		return 1;
	}

	while (!feof(fp))                             //������ ������ ���� ���� �ݺ��ϴ� �ݺ���
	{
		fgets(str, 100, fp);                      //str�迭�� ������ ���ڿ��� �о���� ���
		printf("%6d:%s", i++, str);               //�о�� ���ڿ��� ���Ŀ� ���� ���
	}

	fclose(fp);                                   //���� �ݱ�

	return 0;
}