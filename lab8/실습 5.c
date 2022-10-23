/*1613665 ������к� �ڼ���
21-04-27
�� ������ �ִ� ������� �ּ� ������� ��ȯ�ϴ� ���α׷��Դϴ�.*/

#include <stdio.h>

void get_lcm_gcd(int x, int y, int* p_lcm, int* p_gcd)
{
	int a = x, b = y;                      //x�� y�� ��� �������� 0�� �Ǿ �����̹Ƿ� a�� b�� �����صд�
	int temp = 0;                          //�ִ����� ��꿡 ����� �ӽ� ����
	if (y < x)
	{
		while (y != 0)                     //x�� y���� Ŭ ����� �ִ����� ���
		{
			int temp = x % y;
			x = y;
			y = temp;
		}
		*p_gcd = x;
	}
	else
	{
		while (x != 0)                    //y�� x���� Ŭ ����� �ִ����� ���
		{
			int temp = y % x;
			y = x;
			x = temp;
		}
		*p_gcd = y;
	}

	*p_lcm = (a * b) / *p_gcd;            //�ּҰ���� ���
}

int main()
{
	int num1 = 0, num2 = 0;               //�� ���� ������ ������ ����
	int lcm = 0, gcd = 0;                 //�ּҰ������ �ִ������� ������ ����
	int* p_lcm = &lcm, * p_gcd = &gcd;    //�ּҰ������ �ִ������� ������ ����

	printf("�ΰ��� ������ �Է��Ͻÿ�:");  //������ �Է��϶�� �޽���
	scanf("%d %d", &num1, &num2);         //������ �Է¹޴� ���

	get_lcm_gcd(num1, num2, p_lcm, p_gcd); //�Լ� ȣ��

	printf("�ּҰ������ %d�Դϴ�.\n", lcm); //�ּҰ������ ����ϴ� �޽���
	printf("�ִ������� %d�Դϴ�.", gcd);   //�ִ������� ����ϴ� �޽���

	return 0;
}