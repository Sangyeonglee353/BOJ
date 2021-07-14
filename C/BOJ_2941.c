#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char input[100];
	int i, sum;

	// 문자 입력부
	scanf("%s", input);

	// 전체 문자 개수
	sum = strlen(input);

	// 크로아티아 알파벳인 경우 전체 문자 개수에서 차감
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