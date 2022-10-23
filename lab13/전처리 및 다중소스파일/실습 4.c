/*1613665 �ڼ��� ������к�
21-05-31
������ �Է¹޾� ��Ʈ�� �̵���Ű�� ���α׷��Դϴ�.*/

#include <stdio.h>

void display_bit(int num)
{
	int i;
	unsigned int mask = 1 << 31;                          //�μ��� ���� ������ & ������ �ϱ� ���� ����
	for (i = 0; i < (sizeof(int) * 8); i++)
	{
		((num & mask) == 0) ? printf("0"): printf("1");   //mask�� num�� & �����ؼ� num�� ��Ʈ �������� ����Ʈ�ϴ� ���ǹ�
		mask >>= 1;
	}
	printf("\n");
}

int main()                                         
{
	int num = 0, distance = 0, toRight = 0;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num);

	printf("���� �̵��� 0, ������ �̵��� 1�� �Է��Ͻÿ�: ");
	scanf("%d", &toRight);

	printf("�̵���ų �Ÿ�: ");
	scanf("%d", &distance);

	printf("�̵� ��: ");
	display_bit(num);

	if (toRight == 0)                                     //���� ���ǿ� ���� ������ distance��ŭ �̵���Ű�� ���ǹ�
	{
		num = num << distance;
	}
	else
		num = num >> distance;

	printf("�̵� ��: ");
	display_bit(num);

	return 0;
}