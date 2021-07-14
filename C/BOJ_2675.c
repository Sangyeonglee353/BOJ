#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	int T, R, i, j, k; // T: 테스트 케이스의 개수, R: 반복 횟수, i, j, k: 반복 변수
	char S[20]; // S: 입력받을 문자열 변수, 크기는 20

	scanf("%d", &T); // 테스트 케이스 입력

	for (i = 0; i < T; i++)
	{
		scanf("%d %s", &R, S);          // 반복 횟수와 문자열 입력

		for (j = 0; j < strlen(S); j++) // 문자열의 길이 만큼
		{
			for (k = 0; k < R; k++)     // 반복 횟수만큼 각 문자 반복
			{
				printf("%c", S[j]);
			}
		}
		printf("\n");
	}
	
	return 0;
}