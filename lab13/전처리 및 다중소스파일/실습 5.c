/*1613665 �ڼ��� ������к�
21-06-01
��Ʈ XOR �������� ��ȣȭ�� ��ȣȭ�� �����ϴ� ���α׷��Դϴ�.*/

#include <stdio.h>
#include <stdlib.h>
#include "encrypt.h"

int main()
{
	char str[100] = { 0 };                        //���ڿ��� �Է¹��� �迭
	char encoded[100] = { 0 };                    //��ȣȭ�� ���ڿ��� ������ �迭
	char decoded[100] = { 0 };                    //��ȣȭ�� ���ڿ��� ������ �迭
	char key = 5;                                 //��ȣ

	printf("���ڿ��� �Է��Ͻÿ�: ");
	gets_s(str, 100);

	strEncode(str, encoded, key);
	printf("%s�� %s�� ���ڵ���\n", str, encoded);

	strDecode(encoded, decoded, key);
	printf("%s�� %s�� ���ڵ���\n", encoded, decoded);

	return 0;
}