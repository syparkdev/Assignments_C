/*1613665 �ڼ��� ������к�
21-06-01
����ڷκ��� �ܾ �Է¹޴� ������ ���� �޸𸮷� �Ҵ�޴� ���α׷��Դϴ�.*/

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

char* get_word()
{
	char* s = (char*)malloc(50);                //���� �޸� �Ҵ�

	if (s == NULL)
	{
		printf("�޸� �Ҵ� ����\n");
		exit(1);
	}

	printf("�ܾ �Է��Ͻÿ�(�ִ� 50����): "); //�ܾ �Է��϶�� �޽���
	scanf("%s", s);                             //�ܾ �Է¹޴� ���

	return s;
}

int main()
{
	char* s = NULL;

	s = get_word();
	printf("���� �޸𸮿� ����� �ܾ�� %s�Դϴ�.", s);  //��� ���

	return 0;
}