#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char input[1000000];
	int count[26] = { 0, };
	int i,j, max; // i,j: 반복 변수, max: 최대값
	int select = 0;
	int result = 0;

	// 문자 입력부
	scanf("%s", input);

	// 각 문자 수 계산부_소문자
	for (i = 'a'; i <= 'z'; i++)
	{
		for (j = 0; j < strlen(input); j++)
		{
			if (i == input[j])
			{
				count[i - 'a']++;
			}
		}
	}

	// 각 문자 수 계산부_대문자
	for (i = 'A'; i <= 'Z'; i++)
	{
		for(j = 0; j < strlen(input); j++)
		{ 
			if (i == input[j])
			{
				count[i - 'A']++;
			}
		}
	}

	// 최대 문자 수 계산부
	max = count[0];
	for (i = 0; i < 26; i++)
	{
		if (max < count[i])
		{
			max = count[i];
			select = i;
		}
	}

	// 가장 많이 사용된 알파벳이 여러 개 존재하는지 검사
	for (i = 0; i < 26; i++)
	{
		if (max == count[i])
		{
			result++;
		}
	}

	// 결과 출력부
	if (result > 1)
	{
		printf("?\n");
	}
	else
	{
		printf("%c", select + 'A');
	}

	return 0;
}