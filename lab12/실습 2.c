/*1613665 �ڼ��� ������к�
* 21-05-25
�� ���� �ؽ�Ʈ ������ ���� ���ϴ� ���α׷��Դϴ�.*/

#include <stdio.h>
#include <string.h>

int main()
{
	FILE* fp1 = NULL, * fp2 = NULL;
	char name1[100] = { 0 }, name2[100] = { 0 };
	char str1[100] = { 0 }, str2[100] = { 0 };

	printf("ù��° ���� �̸�:");                       //���� �̸��� �Է��϶�� �޽���
	scanf("%s", name1);                                //���� �̸��� �Է¹޴� ���
	printf("�ι�° ���� �̸�:");
	scanf("%s", name2);

	fp1 = fopen(name1, "r");                           //���� ����
	if (fp1 == NULL)
	{
		printf("������ �� �� �����ϴ�.\n");
		return 0;
	}

	fp2 = fopen(name2, "r");
	if (fp2 == NULL)
	{
		printf("������ �� �� �����ϴ�.\n");
		return 0;
	}

	while (!feof(fp1) && !feof(fp2))                   //ù��° ���ϰ� �ι�° ������ �� ������ ���ϴ� �ݺ���
	{
		fgets(str1, 100, fp1);
		fgets(str2, 100, fp2);
		if (strcmp(str1, str2) != 0)                   //�ٸ� ���� �߰� �� ��� �� break
		{
			printf("<<%s", str1);
			printf(">>%s", str2);

			break;
		}
	}

	if (feof(fp1) && feof(fp2))                       //�ٸ� ������ �߰����� ���� ä�� �� ������ �� ���� ���
		printf("������ ���� ��ġ��\n");               //��ġ�Ѵٴ� �޽��� ���

	fclose(fp1);
	fclose(fp2);

	return 0;
}