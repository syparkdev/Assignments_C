/*������к� 1613665 �ڼ���
* 21-04-05
* ����ڿ��� �ǿ����ڸ� �Է¹ް� ��Ģ������ �����ϴ� ���α׷��Դϴ�.*/

#include <stdio.h>

void Bar(int n)                       //�Է¹��� ���̸�ŭ �޴��� ���м��� ����ϴ� �Լ�
{
	int i;
	for (i = 0; i < n; i++)
		printf("=");
	printf("\n");
}

void Menu()                           //�޴��� ����ϴ� �Լ�
{
	Bar(25);
	printf("MENU\n");
	Bar(25);
	printf("1.\t����\n");
	printf("2.\t����\n");
	printf("3.\t����\n");
	printf("4.\t������\n");
	printf("5.\t������\n");
}

double Calc(int op, int n1, int n2)  //�޴��� �ǿ����ڸ� �μ��� �޾� ��Ģ����� ������ ������ �ϴ� �Լ�
{
	double result = 0.0;

	if (op == 1)
		result = n1 + n2;
	else if (op == 2)
		result = n1 - n2;
	else if (op == 3)
		result = n1 * n2;
	else if (op == 4)
		result = n1 / n2;
	else if (op == 5)
		result = n1 % n2;

	return result;

}

int main()
{
	char again = 'y';                      //�ݺ��� ���� ������ �޴� ����, y�� �ʱ�ȭ
	int route, num1, num2;                 //������ ������ �ǿ����ڸ� �����ϴ� ����
	double answer = 0;                     //����� ����� �����ϴ� ����

	while (again == 'y')
	{
		Menu();
		
		printf("6.\t���ϴ� �޴��� �����Ͻÿ�(1-5): ");        //������ ������ �Է��϶�� �޽���
		scanf("%d", &route);                                  //������ ������ �Է¹޴� ���

		printf("7.\t���� 2���� �Է��Ͻÿ�: ");                //�ǿ����ڸ� �Է��϶�� �޽���
		scanf("%d %d", &num1, &num2);                         //�ǿ����ڸ� �Է¹޴� ���

		answer = Calc(route, num1, num2);                     //���� �Լ��� ȣ���Ͽ� ������� ������ �����ϴ� ��

		printf("8.\t�ϻ���: %lf \n", answer);               //������� ����ϴ� �޽���

		printf("9.\t����Ϸ��� y�� �����ÿ�.");               //����� �ݺ����� ���� �޽���
		scanf(" %c", &again);                                 //����� �ݺ��ϴ� ������ �޴� ���

	}
	return 0;
}