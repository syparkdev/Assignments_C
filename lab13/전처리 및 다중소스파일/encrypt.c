#include <stdio.h>
#include "encrypt.h"

void strEncode(char* str, char* encoded, int key)
{
	int i = 0;
	while (str[i] != NULL)
	//입력받은 문자열이 끝날 때까지 키와 XOR 연산하여 암호화 배열에 대입
	{
		encoded[i] = str[i] ^ key;
		i++;
	}
}

void strDecode(char* encoded, char* decoded, int key)    
{
	int i = 0;
	while (encoded[i] != NULL)
	//암호화한 문자열이 끝날 때까지 키와 XOR 연산하여 복호화 배열에 대입
	{
		decoded[i] = encoded[i] ^ key;
		i++;
	}
}