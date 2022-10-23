#include <stdio.h>
#include "encrypt.h"

void strEncode(char* str, char* encoded, int key)
{
	int i = 0;
	while (str[i] != NULL)
	//�Է¹��� ���ڿ��� ���� ������ Ű�� XOR �����Ͽ� ��ȣȭ �迭�� ����
	{
		encoded[i] = str[i] ^ key;
		i++;
	}
}

void strDecode(char* encoded, char* decoded, int key)    
{
	int i = 0;
	while (encoded[i] != NULL)
	//��ȣȭ�� ���ڿ��� ���� ������ Ű�� XOR �����Ͽ� ��ȣȭ �迭�� ����
	{
		decoded[i] = encoded[i] ^ key;
		i++;
	}
}