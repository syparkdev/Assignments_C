/*1613665 �ڼ��� ������к�
* 21-05-25
�Է¹��� �̸����� �ؽ�Ʈ ������ ���� �μ� ������ ������ ������ ���� ���α׷��Դϴ�.*/

#include <stdio.h>
#include <ctype.h>

int main()
{
	FILE* fp1 = NULL;
	char name[100] = { 0 };
	char letter = 0;
	int num = 0;
	int i = 1;

	printf("���� �̸��� �Է��Ͻÿ�:");                //���� �̸��� �Է��϶�� �޽���
	scanf("%s", name);                                //���� �̸��� �Է¹޴� ���

	fp1 = fopen(name, "r");                           //���� ����
	if (fp1 == NULL)
	{
		printf("������ �� �� �����ϴ�.");
		return 1;
	}

	while (!feof(fp1))                                //������ ������ ���� ���� �ݺ��ϴ� �ݺ���
	{
		letter = fgetc(fp1);                          //�� ���ھ� �и��ؼ� letter�� ����
		if (isprint(letter))                          //�μ� ������ �������� Ȯ���ϴ� ���ǹ�
			num += 1;                                 //�μ� �����ϸ� num ����
	}

	fclose(fp1);                                      //���� �ݱ�

	printf("������ ������ %d", num);                  //��� ���

	return 0;
}