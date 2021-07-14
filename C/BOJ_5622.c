#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char input[15];
	int i, len;
	int cnt = 0;

	// 단어 입력부
	scanf("%s", input);
	
	// 반복문 횟수 계산: 단어의 길이 만큼
	len = strlen(input);

	// 알파벳별 시간 계산부
	for (i = 0; i < len; i++)
	{
		if (input[i] == 'A' || input[i] == 'B' || input[i] == 'C')
		{
			cnt = cnt+ 3;
		}
		else if(input[i] == 'D' || input[i] == 'E' || input[i] == 'F')
		{
			cnt = cnt + 4;
		}
		else if( input[i] == 'G' || input[i] == 'H' || input[i] == 'I')
		{
			cnt = cnt + 5;
		}
		else if (input[i] == 'J' || input[i] == 'K' || input[i] == 'L')
		{
			cnt = cnt + 6;
		}
		else if (input[i] == 'M' || input[i] == 'N' || input[i] == 'O')
		{
			cnt = cnt + 7;
		}
		else if (input[i] == 'P' || input[i] == 'Q' || input[i] == 'R' || input[i] == 'S')
		{
			cnt = cnt + 8;
		}
		else if (input[i] == 'T' || input[i] == 'U' || input[i] == 'V')
		{
			cnt = cnt + 9;
		}
		else if (input[i] == 'W' || input[i] == 'X' || input[i] == 'Y' || input[i] == 'Z')
		{
			cnt = cnt + 10;
		}
		else
		{
			printf("error!");
		}
	}
	
	printf("%d", cnt);
}