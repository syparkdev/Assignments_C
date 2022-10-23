/*1613665 박세연 영어영문학부
21-05-31
정수를 입력받아 비트를 이동시키는 프로그램입니다.*/

#include <stdio.h>

void display_bit(int num)
{
	int i;
	unsigned int mask = 1 << 31;                          //인수로 받은 정수와 & 연산을 하기 위한 변수
	for (i = 0; i < (sizeof(int) * 8); i++)
	{
		((num & mask) == 0) ? printf("0"): printf("1");   //mask와 num을 & 연산해서 num을 비트 형식으로 프린트하는 조건문
		mask >>= 1;
	}
	printf("\n");
}

int main()                                         
{
	int num = 0, distance = 0, toRight = 0;

	printf("정수를 입력하시오: ");
	scanf("%d", &num);

	printf("왼쪽 이동은 0, 오른쪽 이동은 1을 입력하시오: ");
	scanf("%d", &toRight);

	printf("이동시킬 거리: ");
	scanf("%d", &distance);

	printf("이동 전: ");
	display_bit(num);

	if (toRight == 0)                                     //방향 조건에 따라 정수를 distance만큼 이동시키는 조건문
	{
		num = num << distance;
	}
	else
		num = num >> distance;

	printf("이동 후: ");
	display_bit(num);

	return 0;
}