/*1613665 �ڼ��� ������к�
21-04-26
�迭�� ������ �����Ͽ� �ִ񰪰� �ּڰ��� ����ϴ� ���α׷��Դϴ�.*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main()
{
	srand(time(NULL));                            //������ �����ϰ� �����ϰ� �ϴ� ���๮
	int i, j, temp, least;                        //�ݺ� ���� ����, �ӽ� ����, �ּڰ��� �ε��� ����
	int arr[SIZE] = { 0 };                        //�迭 �ʱ�ȭ

	for (i = 0; i < SIZE; i++)                    //�迭�� ������ ������ �Ҵ��ϴ� �ݺ���
		arr[i] = rand();

	for (i = 0; i < SIZE - 1; i++)                //���� ������ �����ϴ� �ݺ���
	{
		least = i;                                //least�� ������ ũ�⸦ ���� �ε��� �Ҵ�
		for (j = i + 1; j < SIZE; j++)            //least�� �迭���� ���� ���� ���� �ε��� �Ҵ��ϴ� �ݺ���
			if (arr[j] < arr[least])
				least = j;

		temp = arr[i];                            //�迭�� ���� �տ� �ּڰ� �Ҵ�
		arr[i] = arr[least];
		arr[least] = temp;
	}

	printf("�ִ��� %d\n�ּڰ��� %d", arr[9], arr[0]);   //�ִ񰪰� �ּڰ��� ���

	return 0;
}