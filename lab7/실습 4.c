/*1613665 �ڼ��� ������к�
21-04-26
2���� �迭�� ��� ���� �հ踦 ����ϴ� ���α׷��Դϴ�.*/

#include <stdio.h>
#include <math.h>
#define SIZE 10

int main()
{
	double arr[SIZE] = { 0 };                        //�Ǽ��� �迭 ����
	int i;                                           //�ݺ� ���� ���� ����
	double sum = 0, avg = 0, dvt = 0;                //��, ���, ǥ�������� ������ ���� ����

	for (i = 0; i < SIZE; i++)                       //�迭�� ���� �Է¹޴� �ݺ���
	{
		printf("[%d] �Է�: ", i + 1);
		scanf("%lf", &arr[i]);
	}

	for (i = 0; i < SIZE; i++)                       //�迭�� ���� ���ϴ� �ݺ���
		sum += (double)arr[i];


	avg = sum / SIZE;                                //���� ������ ����� ���ϴ� ���
	sum = 0;                                         //ǥ������ ��꿡 ����ϱ� ���� sum�� �ʱ�ȭ

	for (i = 0; i < SIZE; i++)                       //�л��� ���ϴ� ����
		sum += ((arr[i] - avg) * (arr[i] - avg));

	dvt = sqrt(sum / SIZE);                          //�л��� ���������� ǥ�������� ���

	printf("��հ��� %lf\n", avg);                   //��� ���
	printf("ǥ���������� %lf", dvt);                 //ǥ������ ���

	return 0;
}