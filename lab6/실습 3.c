/*������к� 1613665 �ڼ���
21-04-12
����Լ��� �̿��Ͽ� �������� ����ϴ� ���α׷��Դϴ�.*/

#include <stdio.h>

int power(int base, int power_raised)                  //�ؼ��� ������ �μ��� �޾� �������� ����ϴ� �Լ�
{
	if (power_raised == 1)                             //������ 1�� ��� �ؼ��� ��ȯ�϶�� ����Լ��� ��������
		return base;
	else                                               
		return base * power(base, power_raised - 1);
	//������ 1�� �ƴ� ��� ������ �ϳ��� �ٿ����� �������ǿ� ������ ������ ����Լ��� ����
}

int main()
{
	int base, pow, answer;                             //�ؼ�, ����, ������� ������ ����

	printf("�ؼ�: ");                                  //�ؼ��� �Է��϶�� �޽���
	scanf("%d", &base);                                //�ؼ��� �Է¹޴� ��� 
	printf("����: ");                                  //������ �Է��϶�� �޽���
	scanf("%d", &pow);                                 //������ �Է¹޴� ���

	answer = power(base, pow);                         //�������� ����ϴ� �Լ��� ȣ���Ͽ� ������� answer�� �Ҵ�

	printf("%d^%d = %d\n", base, pow, answer);         //������� ����ϴ� �޽���

	return 0;
}