/*1613665 박세연 영어영문학부
21-06-01
비트 XOR 연산으로 암호화와 복호화를 수행하는 프로그램입니다.*/

#include <stdio.h>
#include <stdlib.h>
#include "encrypt.h"

int main()
{
	char str[100] = { 0 };                        //문자열을 입력받을 배열
	char encoded[100] = { 0 };                    //암호화한 문자열을 보관할 배열
	char decoded[100] = { 0 };                    //복호화한 문자열을 보관할 배열
	char key = 5;                                 //암호

	printf("문자열을 입력하시오: ");
	gets_s(str, 100);

	strEncode(str, encoded, key);
	printf("%s가 %s로 엔코딩됨\n", str, encoded);

	strDecode(encoded, decoded, key);
	printf("%s가 %s로 디코딩됨\n", encoded, decoded);

	return 0;
}