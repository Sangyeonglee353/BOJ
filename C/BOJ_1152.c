#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	char input[1000001]; // '\n'넣어줄 공간까지
	int space = 0;
	int word = 0;
	int len;
	int i; // 반복 변수

	// 문자열 입력부
	gets(input, 1000001);
	len = strlen(input);

	// 띄어쓰기 개수 세기
	for (i = 0; i < len; i++)
	{
		if (input[i] == ' ')
		{
			space++;
		}
	}

	// 앞뒤 공백과 연속 공백이 없을 경우 
	// 단어 개수 = 공백 + 1
	word = space + 1;

	// 예외 처리 공백으로만 이루어져 있을 경우
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