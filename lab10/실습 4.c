/*1613665 �ڼ��� ������к�
* 21-05-12
* ���� ������ �ѷ��� ���ϴ� �Լ��� ����ϴ� ���α׷��Դϴ�.*/

#include <stdio.h>
#define PIE 3.14

typedef struct                                //��ǥ�� ǥ���� ����ü ����
{
	int x, y;
} point;

typedef struct                                //���� ǥ���� ����ü ����
{
	point center;
	double radius;
} CIRCLE;

double area(CIRCLE c)                         //���� ������ ���ϴ� �Լ�
{
	return c.radius * c.radius * PIE;
}

double perimeter(CIRCLE c)                    //���� �ѷ��� ���ϴ� �Լ�
{
	return c.radius * 2 * PIE;
}

int main()
{
	CIRCLE c1 = { {0,0},10 };                //�� ����

	printf("���� �߽���:%d %d\n", c1.center.x, c1.center.y);
	printf("���� ������:%lf\n", c1.radius);
	printf("���� ����=%lf\n", area(c1));
	printf("���� �ѷ�=%lf\n", perimeter(c1));

	return 0;
}