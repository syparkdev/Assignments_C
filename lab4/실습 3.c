/*1613665 �ڼ���
21-03-30
�޴��� �����Ͽ� ��Ģ������ �����ϴ� ���α׷��Դϴ�.*/

#include <stdio.h>

void star_bar(int num)                        //������ȣ Ư�����ڷ� �޴� ���м� ����� �Լ� 
{
	int i;
	for (i = 0; i < num; i++)                 //���ڷ� ���� �ݺ� Ƚ����ŭ ������ȣ�� ����ϴ� �ݺ���
		printf("*");
	printf("\n");
}

int main()
{
	char op = 0;                                        //������ ������ ������ ����
	int num1 = 0, num2 = 0, answer = 0;                 //�ǿ����� �� ���� ���� ����� ������ ����

	while (1)                                           //�޴� ���ϸ� �����ϰ� �ݺ��ؼ� ����ϴ� �ݺ���
	{
		star_bar(25);                                   //�޴� ����
		printf("A --- Add\n");
		printf("S --- Subtract\n");
		printf("M --- Multiply\n");
		printf("D --- Divide\n");
		printf("Q --- Quit\n");
		star_bar(25);

		do                       //���� ������ �޴��� �� ������ ������ �����϶�� �޽����� ���ѹݺ��ϴ� �ݺ���
		{
			printf("������ �����Ͻÿ�: ");
			scanf(" %c", &op);
			
		} while (op != 'A' && op != 'S' && op != 'M' && op != 'D' && op != 'Q');
		//���� ������ �޴��� ������ �� �ݺ����� �����ϴ� ����

		if (op == 'Q')                      //���� ������ �޴� �� Q�� ������ ��� �ݺ����� �����ϴ� ����
			break;
		else
		{
			printf("�� ���� �������� �и��Ͽ� �Է��Ͻÿ�: ");       //�ǿ����ڸ� �Է��϶�� �޽���
			scanf("%d %d", &num1, &num2);                           //�ǿ����ڸ� �Է¹޴� ���

			if (op == 'A')                                          //������ ���꿡 ���� ����� �����ϴ� ���๮
				answer = num1 + num2;
			else if (op == 'S')
				answer = num1 - num2;
			else if (op == 'M')
				answer = num1 * num2;
			else
				answer = num1 / num2;

			printf("%d\n", answer);                                 //����� ����ϴ� �޽���
		}
	}
	return 0;
}
