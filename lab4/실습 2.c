/*1613665 �ڼ���
21-03-30
�ݺ� ������ ����Ͽ� �� ��� Ư�����ڷ� ������ ����ϴ� ���α׷��Դϴ�.*/

#include <stdio.h>

int main()
{
	int line, star, space;

	for (line = 0; line < 7; line++)           //�� ������ ���ϴ� �ݺ���
	{	
		for (space = 6; space >= 0; space--)   //�����̽� ������ ���ϴ� �ݺ���
		{
			if (space > line)                  //�� �ٿ� �����̽��� �� �ڸ��� �Ǵ��ϴ� ����
				printf(" ");
			else
				printf("*");
		}
		printf("\n");                          //�� ���� ���� ������ �ٹٲ�
	}

	return 0;
}
