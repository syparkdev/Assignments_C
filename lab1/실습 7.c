#include <stdio.h>

int main()
{
	int data = 0; // �Է¹��� ������ �ڸ�

	printf("16���� ������ �Է��Ͻÿ�:"); //data�� �Է��϶�� �޽���
	scanf("%x", &data); //data�� �޴´�
	printf("8�����δ� %#o �Դϴ�.\n", data);
	printf("10�����δ� %d �Դϴ�.\n", data);
	printf("16�����δ� %#x �Դϴ�.\n", data);

	return 0;
}