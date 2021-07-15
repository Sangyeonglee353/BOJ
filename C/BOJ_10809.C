#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char S[100] = { 0, }; // 입력받을 문자열 변수
	int i, j; // 반복 변수
	scanf("%s", S);
	for (i = 97; i <= 122; i++)
	{
		j = 0;
		while (S[j] != 0)
		{
			if (S[j] == (char)i) // 문자열에 포함된 경우
			{
				break;
			}
			else
			{
				j++;
			}
		}
		if (S[j] == (char)i) // 문자열에 포함된 경우
		{
			printf("%d ", j);
		}
		else // 문자열에 포함되지 않은 경우
		{
			printf("-1 ");
		}
	}
	
	return 0;
}