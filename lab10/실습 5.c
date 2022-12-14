/*1613665 박세연 영어영문학부
* 21-05-12
* 구조체의 배열에서 조건에 해당하는 구조체를 찾아 출력하는 프로그램입니다.*/

#include <stdio.h>

typedef struct                        //사원의 정보를 포함하는 구조체 정의
{
	int num;
	char name[20];
	char dial[20];
	int age;
} employee;

int main()
{
	int i;

	employee list[10] =              //사원 정보 초기화
	{
		{ 0, "홍길동1","0",20 },
		{ 1, "홍길동2","1",15 },
		{ 2, "홍길동3","2",25 },
		{ 3, "홍길동4","3",35 },
		{ 4, "홍길동5","4",27 },
		{ 5, "홍길동6","5",43 },
		{ 6, "홍길동7","6",80 },
		{ 7, "홍길동8","7",22 },
		{ 8, "홍길동9","8",21 },
		{ 9, "홍길동10","9",55 },
	};

	for (i = 0; i < 10; i++)        //조건에 해당하는 사원의 이름과 나이를 출력하는 반복문
	{
		if (list[i].age >= 20 && list[i].age <= 30)
			printf("이름=%s\t나이=%d\n", list[i].name, list[i].age);
	}

	return 0;
}