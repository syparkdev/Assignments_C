#include <stdio.h>

int main()
{
	double w, h, d, volume; // ����, �ʺ�, ���̸� ������ ����

	printf("������ ���� ���� ���̸� �ѹ��� �Է�:"); // ������ ġ���� �Է��϶�� �޽���
	scanf("%lf %lf %lf", &w, &h, &d); //������ ġ�� �Է� �ޱ�
	volume = w * h * d; //���� ���
	printf("������ ���Ǵ� %11.6lf �Դϴ�.", volume); //����� �˷��ִ� �޽���

	return 0;
}