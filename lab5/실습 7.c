/*������к� 1613665 �ڼ���
21-04-05
�� �� ������ �Ÿ��� ����ϴ� ���α׷��Դϴ�.*/

#include <stdio.h>
#include <math.h>

double get_distance(double x1, double y1, double x2, double y2)      //�� �� ������ �Ÿ��� ����ϴ� �Լ�
{
	double distance;
	distance = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	return distance;
}

int main()
{
	double _x1, _x2, _y1, _y2;

	printf("ù��° ���� ��ǥ�� �Է��Ͻʽÿ�: (x,y) ");               //ù��° ��ǥ�� �Է��϶�� �޽���
	scanf("%lf %lf", &_x1, &_y1);                                    //ù��° ��ǥ�� �Է¹޴� ���

	printf("�ι�° ���� ��ǥ�� �Է��Ͻʽÿ�: (x,y) ");               //�ι�° ��ǥ�� �Է��϶�� �޽���         
	scanf("%lf %lf", &_x2, &_y2);                                    //�ι�° ��ǥ�� �Է¹޴� ���

	printf("�� �� ������ �Ÿ��� %lf �Դϴ�.\n", get_distance(_x1, _y1, _x2, _y2));
	//�� �� ������ �Ÿ��� ����ϴ� �޽���

	return 0;
}