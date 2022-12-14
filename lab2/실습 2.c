/*영어영문학부 1613665 박세연
21-03-17
cm로 입력한 키를 피트와 인치로 변환하는 코드입니다.*/

#include <stdio.h>

int main()
{
	double  height, ft, left;    //cm로 키를 입력받을 변수, 피트로 변환한 키와 인치로 남겨지는 부분을 입력받을 변수

	printf("키를 입력하시오(cm):"); //키를 입력하라는 메시지
	scanf("%lf", &height);          //키를 입력받는 기능
	
	ft = height / 2.54 / 12;        //키를 피트로 변환하는 계산
	left = (height / 2.54) - ((int)ft * 12); //인치로 변환한 키에서 피트로 표현 가능한 부분을 빼고 남는 인치를 구하는 계산

	printf("%dcm는 %d피트 %7.6lf인치입니다.", (int)height, (int)ft, left); 
	/*변환한 키를 알려주는 메시지, 변수를 실수로 받았지만 실습 PPT 예시와 같은 모양의 결과를
	내기 위해 자료형을 int로 지정했습니다.*/

	return 0;
}