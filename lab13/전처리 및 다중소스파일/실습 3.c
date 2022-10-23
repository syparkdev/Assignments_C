/*1613665 �ڼ��� ������к�
21-05-31
��Ʈ�� �����ϴ� ��ũ�θ� �ۼ��ϰ� Ȯ���ϴ� ���α׷��Դϴ�.*/

#include <stdio.h>
#define SET_BIT(n, pos) ((n) |= (1 << (pos)))
#define CLR_BIT(n, pos) ((n &= (~(1) << (pos))))
#define GET_BIT(n, pos) (((n) >> (pos)) & 1)

int main()
{
	int n = 8421505;                                //������ 16������ 10������ ��ȯ�� ��

	printf("n=%#x\n", n);                           //�ʱ�ȭ�� ������ ����ϴ� �޽���
	printf("GET_BIT(): %d\n", GET_BIT(n, 0));       //���� n�� ù��° ��Ʈ�� ����ϴ� �޽���
	printf("SET_BIT(2)\n");                         //���� n�� 3��° ��Ʈ�� 1�� �ٲ۴ٴ� �޽���
	printf("n=%#x\n", SET_BIT(n, 2));               //3��° ��Ʈ�� 1�� �ٲ� ������ ���� n�� ���

	return 0;
}