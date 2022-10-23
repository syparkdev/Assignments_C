#include <stdio.h>

int main(void)
{
	double weight = 0; //몸무게 정보가 들어갈 자리를 만듭니다
	double MoonWeight = 0; //달에서의 몸무게 정보가 들어갈 자리를 만듭니다

	printf("몸무게를 입력하십시오(단위:kg):"); //몸무게를 입력하라는 메시지를 줍니다
	scanf_s("%lf", &weight); //몸무게를 입력받습니다 
	MoonWeight = weight * 0.17;
	printf("달에서의 몸무게는 %8.6lf kg 입니다.", MoonWeight); //달에서의 몸무게를 출력합니다

	return 0;
}