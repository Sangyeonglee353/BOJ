#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	char input[1000001]; // '\n'�־��� ��������
	int space = 0;
	int word = 0;
	int len;
	int i; // �ݺ� ����

	// ���ڿ� �Էº�
	gets(input, 1000001);
	len = strlen(input);

	// ���� ���� ����
	for (i = 0; i < len; i++)
	{
		if (input[i] == ' ')
		{
			space++;
		}
	}

	// �յ� ����� ���� ������ ���� ��� 
	// �ܾ� ���� = ���� + 1
	word = space + 1;

	// ���� ó�� �������θ� �̷���� ���� ���
	if (len == space)
	{
		word = 0;
		printf("%d", word);
	}
	else
	{
		if (isspace(input[0]))
		{
			word--;
		}
		if (isspace(input[len - 1]))
		{
			word--;
		}
		printf("%d", word);
	}
}