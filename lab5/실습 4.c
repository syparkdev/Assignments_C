/*������к� 1613665 �ڼ���
21-04-05
������ �޾� ���ΰ��� ��ȯ�ϴ� �Լ��� �ۼ��Ͽ� 
0������ 180�������� ������ ���� �Լ� ������ ����ϴ� ���α׷��Դϴ�. */

#include <stdio.h>
#include <math.h>

#define PI     3.141592                         //���� ������ ����ϱ� ���� ��ȣ���

double sin_degree(double degree)                //������ �Է¹޾� ���ΰ��� ��ȯ�ϴ� �Լ�
{
	double answer = 0;                          //��ȯ�� ���� ������ ���� �ʱ�ȭ
	answer = sin((PI * degree) / 180.0);        
	//������ �޾� �������� ��ȯ�Ͽ� sin�Լ��� �Է��� ��, ������� answer�� �ٽ� �Է�
	return answer;                              //answer�� ��ȯ
}

int main()
{
	double ipt_dgr;                             //�Է��� ���� �� �ݺ� ���� ���� ����

	for (ipt_dgr = 0; ipt_dgr <= 180; ipt_dgr += 10) //0������ 180������ 10���� �����ϸ� �ݺ�
		printf("sin(%f)�� ���� %f\n", ipt_dgr, sin_degree(ipt_dgr)); //�Է��� ������ ������� ����ϴ� �޽���

	return 0;
}