/*1613665 �ڼ��� ������к�
* 21-05-12
* �� ���� ��ġ�� �Ǵ��ϴ� �Լ��� ����ϴ� ���α׷��Դϴ�.*/

#include <stdio.h>

typedef struct                                   //��ǥ�� ǥ���ϴ� ����ü ����
{
	int x, y;
} point;

int equals(point* p1, point* p2)                 //�� ���� ��ǥ�� ���� ������ �Ǻ��ϴ� �Լ�
{
	if (p1->x == p2->x && p1->y == p2->y)        //�� ���� x��ǥ, y��ǥ���� ��ġ�� ��� 
		return 1;                                //1�� ��ȯ
	else
		return 0;
}

int main()
{
	point p1, p2;                                //��ǥ 2�� ����

	point* p_p1 = &p1;                           //�� ��ǥ�� ������ ����
	point* p_p2 = &p2;

	p1.x = 1;
	p1.y = 2;

	p2.x = 3;
	p2.y = 5;

	if (equals(p_p1, p_p2))                     //�� ��ǥ�� ���� ��� �Լ����� 1 ��ȯ, �� ��� ���ٴ� ��� ���
		printf("(%d,%d) == (%d,%d)\n", p1.x, p1.y, p2.x, p2.y);
	else
		printf("(%d,%d) != (%d,%d)\n", p1.x, p1.y, p2.x, p2.y);

	return 0;
}