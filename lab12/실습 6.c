/*1613665 �ڼ��� ������к�
* 21-05-25
���Ͽ��� Ư���� �ܾ ã�� ���� �̸��� �ܾ ��ġ�� �� ��ȣ�� ����ϴ� ���α׷��Դϴ�.*/

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

	printf("���� �̸�:");                   //���� �̸��� �Է��϶�� �޽���
	scanf("%s", name);
	printf("Ž���� �ܾ�:");                 //Ž���� �ܾ �Է��϶�� �޽���
	scanf("%s", word);

	fp = fopen(name, "r");                  //���� ����
	if (fp == NULL)
	{
		printf("������ �� �� �����ϴ�.");
		return 1;
	}

	while (!feof(fp))                       //������ ������ �������� �ݺ�
	{
		fgets(buffer, 100, fp);             //���ۿ� ���ڿ��� �޾ƿ��� ���
		line++;                             //���° ������ ���� ���
		ptr = strstr(buffer, word);         //���ۿ��� ã�� �ܾ��� ��ġ�� �����Ϳ� ����
		if (ptr != NULL)                    //���ڿ����� �ܾ ã���� ��쿡 �����ϴ� ���ǹ�
		{
			printf("%s:%d  %s", name, line, buffer);  //���Ŀ� �°� ��� ���
		}
	}

	fclose(fp);                            //���� �ݱ�

	return 0;
}