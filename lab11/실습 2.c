/*1613665 ������к� �ڼ���
21-05-24
���ڿ��� �迭�� �μ��� �޾Ƽ� ����� ���ڿ��� ����ϴ� ���α׷��Դϴ�.*/

#include <stdio.h>

void pr_str_array(char** dp)          //���ڿ��� �迭�� �μ��� �޾Ƽ� ����� ���ڿ��� ��� ����ϴ� �Լ�
{
	int i;
	for (i = 0; i < 5; i++)
		printf("%s\n", *dp++);        
	//�迭�� �̸��� str�� ���� ������, �ѹ� ���� �����ϸ� �迭�� ù��° ���ڿ��� ����Ų��.
	//���� 2��°, 3��° �̾ 5���� ���ڿ��� ���� ����ϵ��� ++������ ���
}

int main()
{
	char* str[5] =
	{
		"A bad shearer never had a good sickle.",
		"A bad workman (always) blames his tools.",
		"A bad workman quarrels with his tools.",
		"A bad thing never dies.",
		"A bad workman finds fault with his tools."
	};
	
	pr_str_array(str);

	return 0;
}