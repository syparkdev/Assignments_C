/*1613665 �ڼ��� ������к�
21-05-11
ã�� �ٲٱ� ����� �����ϴ� ���α׷��Դϴ�.*/

#include <stdio.h>
#include <string.h>

int main()
{
	char str[80] = { NULL };                      //�Է¹��� ���ڿ��� ������ �迭
	char to[80] = { NULL };                       //ã�� ���ڿ��� ������ �迭
	char from[80] = { NULL };                     //�ٲ� ���ڿ��� ������ �迭
	char revised[80] = { NULL }, * token;         //������ ���ڿ��� ������ �迭�� �ڸ� �ܾ ������ ������ ����

	printf("���ڿ��� �Է��Ͻÿ�:");
	gets_s(str, 80);

	printf("ã�� ���ڿ�:");
	gets_s(from, 80);

	printf("�ٲ� ���ڿ�:");
	gets_s(to, 80);

	token = strtok(str, " ");                    //ù �ܾ token�� ����

	while (token != NULL)                        //str�� ���� ������ �ݺ��ϴ� �ݺ���
	{
		if (strcmp(token, from) != 0)            
			//token�� ������ �ܾ ã�� �ܾ�� �ٸ� ��� ��ū�� ������ ���ڿ��� �����̴� ���ǹ�
		{
			strcat(revised, token);
			strcat(revised, " ");
		}
		else                            
			//token�� ã�� �ܾ�� ��ġ�� ��� �ٲ� ���ڿ��� ������ ���ڿ��� �����̴� ���ǹ�
		{
			strcat(revised, to);
			strcat(revised, " ");
		}

		token = strtok(NULL, " ");               //token�� ���� �ܾ �����ϴ� ���๮
	}

	printf("������ ���ڿ�:%s", revised);         //������ ���ڿ��� ����ϴ� �޽���

	return 0;
}