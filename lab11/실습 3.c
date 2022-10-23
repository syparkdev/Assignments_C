/*1613665 ������к� �ڼ���
21-05-24
���ڿ��� �迭�� �μ��� �޾Ƽ� ���ڿ��� ���Ľ�Ű�� ���α׷��Դϴ�.*/

#include <stdio.h>
#include <string.h>

void sort_strings(char* s[], int size)   //���� ������ ����Ͽ� �μ��� ���� ���ڿ� �������� �迭�� �����ϴ� �Լ�
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

	char* str[3] =                       //������ ���� ���ڿ� ������ �迭
	{
		"src",
		"dst",
		"mycopy"
	};

	sort_strings(str, 3);                //���� �Լ� ȣ��

	for (i = 0; i < 3; i++)              //��� ���
		printf("%s\n", str[i]);

	return 0;
}