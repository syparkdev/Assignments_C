#include <stdio.h>

int main(void)
{
	double weight = 0; //������ ������ �� �ڸ��� ����ϴ�
	double MoonWeight = 0; //�޿����� ������ ������ �� �ڸ��� ����ϴ�

	printf("�����Ը� �Է��Ͻʽÿ�(����:kg):"); //�����Ը� �Է��϶�� �޽����� �ݴϴ�
	scanf_s("%lf", &weight); //�����Ը� �Է¹޽��ϴ� 
	MoonWeight = weight * 0.17;
	printf("�޿����� �����Դ� %8.6lf kg �Դϴ�.", MoonWeight); //�޿����� �����Ը� ����մϴ�

	return 0;
}