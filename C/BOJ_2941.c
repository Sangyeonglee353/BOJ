#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char input[100];
	int i, sum;

	// ���� �Էº�
	scanf("%s", input);

	// ��ü ���� ����
	sum = strlen(input);

	// ũ�ξ�Ƽ�� ���ĺ��� ��� ��ü ���� �������� ����
	for (i = 0; i < strlen(input); i++)
	{
		if ((input[i] == 'l' || input[i] == 'n') && input[i + 1] == 'j')
		{
			sum--;
		}
		if (input[i] == 'd' && input[i + 1] == 'z' && input[i + 2] == '=')
		{
			sum--;
		}
		if (input[i] == '=' || input[i] == '-')
		{
			sum--;
		}
	}
	printf("%d", sum);

	return 0;
}