/*1613665 ������к� �ڼ���
21-04-27
������ ������ ����Ͽ� 2���� ������ �հ� ���� ���ÿ� ��ȯ�ϴ� ���α׷��Դϴ�.*/

#include <stdio.h>

void get_sum_diff(int x, int y, int* p_sum, int* p_diff)    //������ ������ �޾� �հ� ���� ����ϴ� �Լ�
{
	*p_sum = x + y;                                         //x + y�� ���� sum�� ����
	*p_diff = x - y;                                        //x - y�� ���� diff�� ����
}

int main()
{
	int x = 200, y = 100;                                   //x�� y ����
	int sum = 0, diff = 0;                                  //sum�� diff �ʱ�ȭ
	int* psum = &sum, * pdiff = &diff;                      //������ ������ sum�� diff ����

	get_sum_diff(x, y, psum, pdiff);

	printf("���ҵ��� ��=%d\n", sum); 
	printf("���ҵ��� ��=%d", diff);

	return 0;
}