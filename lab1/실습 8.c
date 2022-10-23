#include <stdio.h>

int main()
{
	double w, h, d, volume; // 길이, 너비, 높이를 저장할 공간

	printf("상자의 가로 세로 높이를 한번에 입력:"); // 상자의 치수를 입력하라는 메시지
	scanf("%lf %lf %lf", &w, &h, &d); //상자의 치수 입력 받기
	volume = w * h * d; //부피 계산
	printf("상자의 부피는 %11.6lf 입니다.", volume); //결과를 알려주는 메시지

	return 0;
}