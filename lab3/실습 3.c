/*������к� 1613665 �ڼ���
21-03-23
�� ��ȣ�� �޾� ���ܾ�� ����ϴ� ���α׷��Դϴ�*/

#include <stdio.h>

int main()
{
	int mon;

	printf("����ȣ�� �Է��Ͻÿ�: "); //�� ��ȣ�� �Է��϶�� �޽���
	scanf("%d", &mon);               //�� ��ȣ�� �޴� ���

	switch (mon)                     //�� ��ȣ�� ���� ���̽��� �����ִ� ����ġ��
	{
	case 1:
		printf("Jan");
		break;
	case 2:
		printf("Feb");
		break;
	case 3:
		printf("Mar");
		break;
	case 4:
		printf("Apr");
		break;
	case 5:
		printf("May");
		break;
	case 6:
		printf("Jun");
		break;
	case 7:
		printf("Jul");
		break;
	case 8:
		printf("Aug");
		break;
	case 9:
		printf("Sep");
		break;
	case 10:
		printf("Oct");
		break;
	case 11:
		printf("Nov");
		break;
	case 12:
		printf("Dec");
		break;
	}

	return 0;
}