/*1613665 �ڼ��� ������к�
* 21-05-12
* ������¸� ��Ÿ���� ����ü�� ����ϴ� ���α׷��Դϴ�.*/

#include <stdio.h>
#include <string.h>

int main()
{
	struct account                //���¸� ǥ���� ����ü ����
	{
		int number;
		char name[20];
		int balance;
	};

	struct account client_1;           //client_1�̶�� ���� ����
	client_1.number = 1;               //���� ��ȣ�� 1 ����
	strcpy(client_1.name, "ȫ�浿");   //���� �̸��� ȫ�浿 ����
	client_1.balance = 100000;         //���� �ܾ׿� 100000 ����

	printf("{ %d,%s,%d }", client_1.number, client_1.name, client_1.balance);
	//������ ���� ���� ���

	return 0;
}