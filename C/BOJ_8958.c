#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main(void)
{
	int input; // 입력 수
	int i, j; // 반복 변수
	int count; // 카운트
	int sum[100] = { 0, }; // 합계
	char arr[80]; // 테스트 케이스 문자열 저장변수
	
	scanf("%d", &input);

	for (i = 0; i < input; i++)
	{
		// 입력부
		scanf("%s", &arr);
		count = 1;

		// 합계 계산부
		for (j = 0; j < strlen(arr); j++)
		{
			if (arr[j] == 'O')
			{
				sum[i] += count;
				count++;
			}
			else
			{
				count = 1;
			}
		}
	}

	// 출력부
	for (i = 0; i < input; i++)
	{
		printf("%d\n", sum[i]);
	}
	return 0;
}