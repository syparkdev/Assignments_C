/*������к� 1613665 �ڼ���
21-04-12
���� ������ ����Ͽ� ������ �õ带 �ʱ�ȭ���� ���� ������ �Ǵ��� �� ������ ��ȯ�ϴ� ���α׷��Դϴ�.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void get_random()
{
	static int init = 0;                  //�ʱ�ȭ ���θ� üũ�ϱ� ���� ����
	int num;                              //������ ������ ����

	if (init == 0)                        //ó�� ȣ��� ���
	{
		srand(time(NULL));                //�õ带 �ʱ�ȭ�ϴ� ���๮
		printf("�ʱ�ȭ ����\n");          //�ʱ�ȭ�� �����ߴٴ� �޽���
		init++;                           //�ʱ�ȭ�� �ߴٴ� ǥ��
	}
	else                                  //�ʱ�ȭ�� �ߴٴ� ǥ�ð� �ִ� ���
	{
		num = rand();                     //���� ����
		printf("%d\n", num);              //���� ���
	}
}

int main()
{
	int i;

	for (i = 0; i < 4; i++)               //get_random�� �� �۵��ϴ��� Ȯ���ϱ� ���� �ݺ���
		get_random();                     

	return 0;
}